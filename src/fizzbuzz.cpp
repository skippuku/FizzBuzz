#include "fizzbuzz.hpp"

#include <iostream>

FizzBuzz::FizzBuzz()
  : range(Range(0,0))
{
}

FizzBuzz::~FizzBuzz()
{
}

void FizzBuzz::AddDivisor(const FizzBuzzDivisor &div)
{
    divisors.push_back(div);
}

void FizzBuzz::SetRange(const Range &range)
{
    this->range = range;
}

Range FizzBuzz::GetRange() const
{
    return range;
}

void FizzBuzz::Run() const
{
    for (int number = range.GetStart(); number <= range.GetEnd(); number++)
    {
        bool matched_divisor = false;

        for (const auto &div : divisors)
        {
            if (div.CanDivide(number))
            {
                std::cout << div.GetName();
                matched_divisor = true;
            }
        }

        if (!matched_divisor)
        {
            std::cout << number;
        }

        std::cout << std::endl;
    }
}
