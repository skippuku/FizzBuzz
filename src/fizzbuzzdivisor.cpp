#include "fizzbuzzdivisor.hpp"

FizzBuzzDivisor::FizzBuzzDivisor(int denominator, std::string name)
  : denominator(denominator)
  , name(name)
{
}

FizzBuzzDivisor::~FizzBuzzDivisor()
{
}

bool FizzBuzzDivisor::CanDivide(int number) const
{
    int remainder = number % denominator;
    if (remainder == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int FizzBuzzDivisor::GetDenominator() const
{
    return denominator;
}

std::string FizzBuzzDivisor::GetName() const
{
    return name;
}
