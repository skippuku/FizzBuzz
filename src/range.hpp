#ifndef FIZZBUZZ_RANGE_H
#define FIZZBUZZ_RANGE_H

class Range
{
public:
    Range(int start, int end);
    ~Range();

    int GetStart() const;
    int GetEnd() const;

private:
    int start;
    int end;
};

#endif // FIZZBUZZ_RANGE_H
