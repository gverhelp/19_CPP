#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &copy);
        virtual ~PresidentialPardonForm();

        std::string getTarget() const;
        void        execute(Bureaucrat const &executor) const;

    private:
        std::string _target;
};

#endif