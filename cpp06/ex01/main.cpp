#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data*       data = new Data;
    uintptr_t   serialized = serialize(data);
    Data*       deserialized = deserialize(serialized);

    data->name = "Garreth";
    data->pseudo = "Lomesal";
    data->phoneNumber = "0476544990";

    std::cout << "\n----- ptr as int -----" << std::endl; 
    std::cout << "Adress data: " << data << std::endl;
    std::cout << "as int: " << serialized << std::endl;

    std::cout << "\n----- ptr as Data -----" << std::endl;
    std::cout << "Adress data: " << deserialized << std::endl;
    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Pseudo: " << deserialized->pseudo << std::endl;
    std::cout << "Phone number: " << deserialized->phoneNumber << std::endl;
    return (0);
}