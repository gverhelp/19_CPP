#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &copy);
        virtual ~RobotomyRequestForm();

        std::string getTarget() const;
        void        execute(Bureaucrat const &executor) const;

    private:
        std::string _target;
};

#endif