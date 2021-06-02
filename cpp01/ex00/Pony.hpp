#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
    public:
        Pony();

        void setName();
        void setAge();
        void setSpeed();

        std::string getName() const;
        std::string getAge() const;
        std::string getSpeed() const;

    private:
        std::string name;
        std::string age;
        std::string speed;
};

#endif