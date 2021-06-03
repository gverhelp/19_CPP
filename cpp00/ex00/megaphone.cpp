#include <iostream>
#include <cstdio>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int a = 1; a < argc; a++)
    {
        for (int b = 0; b < (int)strlen(argv[a]); b++)
            putchar(toupper(argv[a][b]));
    }
    putchar('\n');
    return (0);
}