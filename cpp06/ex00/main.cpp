#include "Convert.hpp"

/*
void toAllTypes(Convert &a)
{
    a.toChar();
    a.toInt();
    a.toFloat();
    a.toDouble();
}
*/

int main(int argc, char **argv)
{
    if (argc > 2 || argc < 2)
    {
        std::cout << "Too few or too many arguments." << std::endl;
        return (-1);
    }
    Convert a(argv[1]);

    std::cout << "\n----- Normal tests -----" << std::endl;

//    toAllTypes(a);
    a.ToAllTypes();
    std::cout << "Char: " << a.getChar() << std::endl;
    std::cout << "int: " << a.getInt() << std::endl;
    std::cout << "float: " << a.getFloat() << std::endl;
    std::cout << "double: " << a.getDouble() << std::endl;

    std::cout << "\n----- Operator << -----" << std::endl;

    std::cout << a;
    return (0);
}