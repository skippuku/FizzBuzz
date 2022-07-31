#ifndef FIZZBUZZ_DIVISOR_H
#define FIZZBUZZ_DIVISOR_H

#include <string>

class FizzBuzzDivisor
{
public:
    FizzBuzzDivisor(int denominator, std::string name);
    ~FizzBuzzDivisor();

    bool CanDivide(int number) const;

    int GetDenominator() const;
    std::string GetName() const;

private:
    int denominator;
    std::string name;
};

#endif // FIZZBUZZ_DIVISOR_H
