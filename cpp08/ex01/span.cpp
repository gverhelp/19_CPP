#include "span.hpp"

Span::Span():
maxStore(0)
{

}

Span::Span(unsigned int N):
maxStore(N)
{

}

Span::Span(const Span& copy):
maxStore(0)
{
    *this = copy;
}

Span& Span::operator=(const Span& copy)
{
    if (this != &copy)
    {
        v.clear();
        v.resize(copy.v.size());
        std::copy(copy.v.begin(), copy.v.end(), v.begin());
        maxStore = copy.maxStore;
    }
    return (*this);
}

Span::~Span()
{

}

void Span::addNumber(int a)
{
    if (v.size() == maxStore)
        throw TooManyNumbersException();
    v.push_back(a);
}

void Span::addNumber(iterator begin, iterator end)
{
    if (begin > end)
        throw BadRangeException();
    if ((std::distance(begin, end) + v.size()) > maxStore)
        throw TooManyNumbersException();
    for (iterator tmpbegin = begin; tmpbegin < end; tmpbegin++)
        addNumber(*tmpbegin);
}

unsigned int Span::shortestSpan()
{
    unsigned int shortest = 4294967295;
    std::vector<int>::iterator it;
    std::vector<int>::iterator itnext;

    if (v.size() < 2)
        throw NotEnoughNumberException();
    for (it = v.begin(); it < v.end(); it++)
    {
        itnext = it + 1;
        for (itnext = it + 1; itnext < v.end(); itnext++)
        {
            if (shortest > static_cast<unsigned int>(std::abs(*it - *itnext)))
                shortest = static_cast<unsigned int>(std::abs(*it - *itnext));
        }
    }
    return (shortest);
}

unsigned int Span::longestSpan()
{
    unsigned int longest = 0;
    std::vector<int>::iterator it;
    std::vector<int>::iterator itnext;

    if (v.size() < 2)
        throw NotEnoughNumberException();
    for (it = v.begin(); it < v.end(); it++)
    {
        for (itnext = it + 1; itnext < v.end(); itnext++)
        {
            if (longest < static_cast<unsigned int>(std::abs(*it - *itnext)))
                longest = static_cast<unsigned int>(std::abs(*it - *itnext));
        }
    }
    return (longest);
}

Span::iterator Span::begin()
{
    return (v.begin());
}

Span::iterator Span::end()
{
    return (v.end());
}