#include "fizzbuzz.hpp"

int main(int, char *[])
{
	FizzBuzz app;

	app.SetRange(Range(1, 100));
	app.AddDivisor(FizzBuzzDivisor(3, "Fizz"));
	app.AddDivisor(FizzBuzzDivisor(5, "Buzz"));

	app.Run();

#if 0 // THIS IS GARBAGE!!!
	for (int i=1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz");
		} else if (i % 3 == 0) {
			printf("Fizz");
		} else if (i % 5 == 0) {
			printf("Buzz");
		} else {
			printf("%i", i);
		}
		printf("\n");
	}
#endif

	return 0;
}
