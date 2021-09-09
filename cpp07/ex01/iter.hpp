#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T>
void ft_print(T const print)
{
    std::cout << print << std::endl;
}

template< typename T>
void iter(T* addr, int len, void(*print)(const T&))
{
    for (int a = 0; a < len; a++)
        print(addr[a]);
}

#endif