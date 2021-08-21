#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

typedef struct  Data
{
    std::string phoneNumber;
    std::string pseudo;
    std::string name;
}               Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif