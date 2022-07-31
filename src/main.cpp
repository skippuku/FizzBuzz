#include "fizzbuzz.hpp"

int main(int, char *[])
{
    FizzBuzz app;

    app.SetRange(Range(1, 100));
    app.AddDivisor(FizzBuzzDivisor(3, "Fizz"));
    app.AddDivisor(FizzBuzzDivisor(5, "Buzz"));

    app.Run();

    return 0;
}
