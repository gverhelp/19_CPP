#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack(): std::stack<T>() {};
        MutantStack(const MutantStack& copy): std::stack<T>(copy) {};
        MutantStack& operator=(const MutantStack& copy)
        {
            if (this != &copy)
            {
                this->c = copy.c;
            }
            return (*this);
        }
        virtual ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};

#endif