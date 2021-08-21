#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form;

# include "Bureaucrat.hpp"

class Form
{
    public:
        Form();
        Form(std::string const name, int const gradeToSign, int const gradeToExec);
        Form(Form const &copy);
        Form& operator=(const Form &copy);
        virtual ~Form();

        std::string const   getName() const;
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;
        bool                getIsSigned() const;
        void                beSigned(Bureaucrat const &b);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();

        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class FormIsAlreadySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        std::string const   _Name;
        int const           _gradeToSign;
        int const           _gradeToExec;
        bool                _isSigned;
};

std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif