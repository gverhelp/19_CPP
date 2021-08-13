#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string newType);
        WrongAnimal(WrongAnimal const & copy);
        WrongAnimal& operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal();

        std::string const getType() const;
        virtual void makeSound() const;

    protected :
        std::string _Type;
};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & rhs);

#endif