#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
Form("RobotomyRequestForm", 72, 45),
_target("GenericTarget")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", 72, 45),
_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
Form(copy),
_target(copy._target)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
    if (this != &copy)
    {
        Form::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string RobotomyRequestForm::getTarget() const
{
    return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << "*VHHHH BZZZZZZ BIIIIIN MHMMMM BRRRRR VHHHHH*\n";
    std::string yesorno[2] = {" has been robotomized!\n", " has not been robotomized!\n"};
    std::cout << this->getTarget() << yesorno[rand() % 2];
}