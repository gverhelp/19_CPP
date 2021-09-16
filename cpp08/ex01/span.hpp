#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        virtual ~Span();
        Span& operator=(const Span& copy);

        void addNumber(int a);
        typedef std::vector<int>::iterator iterator;
        void addNumber(iterator begin, iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class TooManyException: public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Too many.");
                }
        };

        class NotEnoughException: public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Not enough.");
                }
        };

        class BadRangeException: public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Bad range.");
                }
        };

    private:
        std::vector<int> v;
        unsigned int     maxStore;
};

#endif