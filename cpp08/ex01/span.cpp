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
        std::copy_n(copy.v.begin(), copy.v.size(), copy.v.begin());
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
        throw TooManyException();
    v.push_back(a);
}

void Span::addNumber(iterator begin, iterator end)
{
    if (begin < end)
        throw BadRangeException();
    if ((std::distance(begin, end) + v.size()) > maxStore)
        throw TooManyException();
    v.insert(v.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
    
}

unsigned int Span::longestSpan()
{

}