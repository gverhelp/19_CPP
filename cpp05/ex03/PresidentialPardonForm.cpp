#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
Form("PresidentialPardonForm", 25, 5),
_target("GenericTarget")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5),
_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy):
Form(copy),
_target(copy._target)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
    if (this != &copy)
    {
        Form::operator=(copy);
        _target = copy.getTarget();
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

std::string PresidentialPardonForm::getTarget() const
{
    return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebrox\n";
}