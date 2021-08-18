#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():
_Name("Generic"),
_Grade(150)
{

}

Bureaucrat::Bureaucrat(std::string const name, int grade):
_Name(name),
_Grade(grade)
{
    if (_Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy):
_Name(copy._Name),
_Grade(copy._Grade)
{
    
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    if (this != &copy)
    {
       _Grade = copy._Grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string const Bureaucrat::getName() const
{
    return (_Name);
}

int Bureaucrat::getGrade() const
{
    return (_Grade);
}

void Bureaucrat::increment()
{
    if (_Grade == 1)
        throw(GradeTooHighException());
    else
        _Grade--;
}

void Bureaucrat::decrement()
{
    if (_Grade == 150)
        throw(GradeTooLowException());
    else
        _Grade++;
}

void Bureaucrat::signForm(Form &f) const
{
    try
    {
        f.beSigned(*this);
        std::cout << "<" << this->getName() << "> signs <" << f.getName() << ">\n";
    }
    catch (std::exception &e)
    {
        std::cerr << e.what();
    }
}

void Bureaucrat::executeForm(Form const &f)
{
    try
    {
        f.execute(*this);
        std::cout << "<" << this->getName() << "> executed <" << f.getName() << ">.\n";
    }
    catch (std::exception& e)
    {
        std::cerr << e.what();
    }
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high !\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!\n");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
    o << "<" << rhs.getName() << "> bureaucrat grade <" << rhs.getGrade() << ">\n";
    return (o);
}