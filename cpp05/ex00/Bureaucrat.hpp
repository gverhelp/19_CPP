#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat& operator=(const Bureaucrat &copy);
        virtual ~Bureaucrat();

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
        std::string const   getName() const;
        int                 getGrade() const;
        void                increment();
        void                decrement();

    private:
        std::string const   _Name;
        int                 _Grade;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif