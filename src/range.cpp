#include "range.hpp"

Range::Range(int start, int end)
  : start(start)
  , end(end)
{
}

Range::~Range()
{
}

int Range::GetStart() const
{
    return start;
}

int Range::GetEnd() const
{
    return end;
}
