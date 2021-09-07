#include "Form.hpp"

Form::Form():
_Name("Generic"),
_gradeToSign(150),
_gradeToExec(150),
_isSigned(false)
{

}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExec):
_Name(name),
_gradeToSign(gradeToSign),
_gradeToExec(gradeToExec),
_isSigned(false)
{

}

Form::Form(Form const &copy):
_Name(copy._Name),
_gradeToSign(copy._gradeToSign),
_gradeToExec(copy._gradeToExec),
_isSigned(copy._isSigned)
{
    
}

Form& Form::operator=(const Form &copy)
{
    if (this != &copy)
    {
        _isSigned = copy.getIsSigned();
    }
    return (*this);
}

Form::~Form()
{

}

std::string const Form::getName() const
{
    return (_Name);
}

int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int Form::getGradeToExec() const
{
    return (_gradeToExec);
}

bool Form::getIsSigned() const
{
    return (_isSigned);
}

void Form::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw(FormIsNotSignedException());
    if (executor.getGrade() > this->getGradeToExec())
        throw(GradeTooHighException());
}

void Form::beSigned(Bureaucrat const &b)
{
    if (this->getIsSigned())
        throw(FormIsAlreadySignedException());
    if (b.getGrade() > this->getGradeToSign())
        throw(GradeTooHighException());
    else
        this->_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form grade is too high!\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form grade is too low!\n");
}

const char* Form::FormIsAlreadySignedException::what() const throw()
{
    return ("Form is already signed!\n");
}

const char* Form::FormIsNotSignedException::what() const throw()
{
    return ("Form is not signed!\n");
}

std::ostream &operator<<(std::ostream &o, const Form &rhs)
{
    o << rhs.getName() << (rhs.getIsSigned() ? " is signed.\n" : " is not signed.\n");
    o << "This form need a bureaucrat graded <" << rhs.getGradeToSign() << "> or more to be signed and can be executed by a bureaucrat graded <" << rhs.getGradeToExec() << "> or more.\n";
    return (o);
}