#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Default MateriaSource constructor has been called." << std::endl;
    int a = 0;
    while (a < 4)
    {
        _memory[a] = 0;
        a++;
    }
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    std::cout << "Copy MateriaSource constructor has been called." << std::endl;
    *this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int a = 0; a < 4; a++)
        {
            delete _memory[a];
        }
        for (int a = 0; a < 4; a++)
        {
            _memory[a] = 0;
        }
        for (int a = 0; a < 4; a++)
        {
            if (_memory[a])
                _memory[a] = copy._memory[a]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor MateriaSource has been called." << std::endl;
    for (int a = 0; a < 4; a++)
        delete _memory[a];
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int a = 0; a < 4; a++)
    {
        if (!_memory[a])
        {
            _memory[a] = m->clone();
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int a = 0; a < 4; a++)
    {
        if (_memory[a] && type == _memory[a]->getType())
            return (_memory[a]->clone());
    }
    return (0);
}