#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &copy);
        virtual ~ShrubberyCreationForm();

        std::string getName() const;
        std::string getTarget() const;
        void        execute(Bureaucrat const &executor) const;

        class ErrorFileException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        std::string _name;
        std::string _target;
};

#endif