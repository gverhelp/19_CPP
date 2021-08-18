#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Intern;

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &copy);
        Intern& operator=(Intern const &copy);
        virtual ~Intern();

        Form* createForm(std::string target, int a);
        Form* makeForm(std::string typeForm, std::string targetForm);

        class FormDoesntExistException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        std::string _formType[3];
};

#endif