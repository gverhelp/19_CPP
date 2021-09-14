#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array& operator=(const Array &copy);
        T& operator[](unsigned int const a);
        ~Array();

        unsigned int size(void) const;

        class ArrayExceptions : public std::exception
        {
            const char *what() const throw();
        };

    private:
        T*              _array;
        unsigned int    _len;
};

template<typename T>
Array<T>::Array():
_len(0)
{
    std::cout << "Constructor has been called" << std::endl;
    _array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int len):
_len(len)
{
    std::cout << "Overloaded constructor has been called" << std::endl;
    _array = new T[_len];
    for (unsigned int a = 0; a < len; a++)
        _array[a] = 0;
}

template<typename T>
Array<T>::Array(const Array &copy)
{
    *this = copy;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &copy)
{
    if (this != &copy)
    {
        _len = copy._len;
        if (_array)
            delete [] _array;
        _array = new T[copy._len];
        for (unsigned int a = 0; a < _len; a++)
            _array[a] = copy._array[a];
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int const a)
{
    if (a >= _len)
        throw ArrayExceptions();
    return (_array[a]);
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "Destructor has been called" << std::endl;
    if (_array)
        delete [] _array;
}

template<typename T>
unsigned int Array<T>::size() const
{
    return (_len);
}

template<typename T>
const char* Array<T>::ArrayExceptions::what() const throw()
{
    return ("This element is out of the limits");
}

#endif