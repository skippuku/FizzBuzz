#include <stdio.h>
#include <stdbool.h>

#define LENGTH(x) (sizeof(x)/sizeof(*(x)))

typedef struct {
    int denominator;
    const char * name;
} FizzBuzzDivisor;

void
do_fizzbuzz(int range_start, int range_end, FizzBuzzDivisor * divs, int count_divs) {
    for (int n = range_start; n <= range_end; n++) {
        bool matched_divisor = false;

        for (int i=0; i < count_divs; i++) {
            if (n % divs[i].denominator == 0) {
                printf("%s", divs[i].name);
                matched_divisor = true;
            }
        }

        if (!matched_divisor) {
            printf("%i", n);
        }

        printf("\n");
    }
}

int
main() {
    FizzBuzzDivisor divs [] = {
        {3, "Fizz"},
        {5, "Buzz"},
    };

    do_fizzbuzz(1, 100, divs, LENGTH(divs));

    return 0;
}
