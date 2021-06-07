#include <iostream>
#include <fstream>
#include <sstream>

int ft_filestream(char *fd, char *str1, char *str2)
{
    std::string newFd = fd;
    std::string newStr1 = str1;
    std::string newStr2 = str2;
    std::string myText;
    int found;
    char c;

    found = 0;
    if (newStr1.empty() || newStr2.empty())
        return (-1);
    std::ifstream ifs("test.txt");
    if (!ifs)
        return (-1);
    std::ofstream ofs(newFd + ".replace");
    if (!ofs)
        return (-1); 
    while (ifs.get(c))
        myText.push_back(c);
    if (newStr1 == newStr2)
        ofs << myText;
    else
    {
        while ((found = myText.find(newStr1)) != std::string::npos)
            myText.replace(found, newStr1.length(), newStr2);
        ofs << myText;
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (0);
    if (ft_filestream(argv[1], argv[2], argv[3]) == -1)
        return (-1);
    return (0);
}