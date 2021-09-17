#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

class NotFoundException : public std::exception
{
    public :
        virtual const char *what() const throw();
};

class ContainerIsEmptyException : public std::exception
{
    public :
        virtual const char *what() const throw();
};

const char* NotFoundException::what() const throw()
{
    return ("Not found.");
}

const char* ContainerIsEmptyException::what() const throw()
{
    return ("Container is empty.");
}

template<typename T>
int easyfind(T& container, int toFind)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator ite = container.end();
    
    if (container.empty())
        throw ContainerIsEmptyException();
    it = std::find(it, ite, toFind);
    if (it == ite)
        throw NotFoundException();
    return (*it);
}

#endif