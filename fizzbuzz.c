
#include <stdio.h>
#include <assert.h>

#define sarrlen(x) (sizeof(x)/sizeof(*x))

void
fizzbuzz(int count_min, int count_max_inclusive, int num_divs, const char * strings [], int divs []) {
	for (int n=count_min; n <= count_max_inclusive; n++) {
		int should_print_number = 1;
		for (int i=0; i < num_divs; i++) {
			if (n % divs[i] == 0) {
				printf("%s", strings[i]);
				should_print_number = 0;
			}
		}
		if (should_print_number) {
			printf("%i", n);
		}
		printf("\n");
	}
}

int
main() {
	int divs [] = {3,5};
	const char * strings [] = {"Fizz", "Buzz"};
	assert(sarrlen(divs) == sarrlen(strings));
	fizzbuzz(1, 100, sarrlen(divs), strings, divs);
}

