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
        T& operator[](unsigned int const &copy);
        ~Array();

        int size(void) const;

        class ArrayExceptions : public std::exception
        {
            const char *what() const throw();
        }

    private:
        T*              _array;
        unsigned int    _len;
};

template<typename T>
Array<T>::Array():
_len(0)
{
    _array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int len):
_len(len)
{
    _array = new T[_len];
    for (int a = 0; a < len; a++)
        _array[a] = 0;
}

template<typename T>
Array<T>::Array(const Array &copy)
{
    if (this != copy)
    {
        //////////////////////////////////////////////////////////////////
    }
    return (*this);
}

/////////////////////////////////////////

#endif