#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H

#include "fizzbuzzdivisor.hpp"
#include "range.hpp"

#include <vector>

class FizzBuzz
{
public:
    FizzBuzz();
    ~FizzBuzz();

    void AddDivisor(const FizzBuzzDivisor &divisor);
    void SetRange(const Range &range);
    Range GetRange() const;
    void Run() const;

private:
    std::vector<FizzBuzzDivisor> divisors;
    Range range;
};

#endif // FIZZBUZZ_H
