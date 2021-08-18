#include "Intern.hpp"

Intern::Intern()
{
    _formType[0] = "Presidential request";
    _formType[1] = "Robotomy request";
    _formType[2] = "Shrubbery request";
}

Intern::Intern(Intern const &copy)
{
    for (int a = 0; a < 3; a++)
        _formType[a] = copy._formType[a];
}

Intern& Intern::operator=(Intern const &copy)
{
    if (this != &copy)
    {
        for (int a = 0; a < 3; a++)
            _formType[a] = copy._formType[a];
    }
    return (*this);
}

Intern::~Intern()
{

}

Form* Intern::createForm(std::string target, int a)
{
    Form*   form[3];
    Form*   retForm;

    form[0] = new PresidentialPardonForm(target);
    form[1] = new RobotomyRequestForm(target);
    form[2] = new ShrubberyCreationForm(target);
    retForm = form[a];
    for (int b = 0; b < 3; b++)
    {
        if (a != b)
            delete form[b];
    }
    return (retForm);
}

Form* Intern::makeForm(std::string typeForm, std::string targetForm)
{
    Form* retForm;
    for (int a = 0; a < 3; a++)
    {
        if (typeForm == _formType[a])
        {
            retForm = createForm(targetForm, a);
            std::cout << "Intern creates <" << retForm->getName() << ">\n";
            return (retForm);
        }
    }
    throw(FormDoesntExistException());
}

const char* Intern::FormDoesntExistException::what() const throw()
{
    return ("Form doesn't exist!\n");
}