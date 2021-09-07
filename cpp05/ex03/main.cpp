#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "\n----- Create Shrubbery Form test -----\n";
	try
	{
		Bureaucrat b("Garreth", 1);
		Intern i;
		Form* f;

		f = i.makeForm("Shrubbery request", "Monkey");
		std::cout << b;
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
	}
	catch(std::exception &e)
	{
		std::cerr<< e.what();
	}
	std::cout << "\n----- Fail test -----\n";
	try
	{
		Bureaucrat b("Lomesal", 1);
		Intern i;
		Form* f;

		f = i.makeForm("robotomyrequest", "My chair");
		std::cout << b;
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
	}
	catch(std::exception &e)
	{
		std::cerr<< e.what();
	}
	std::cout << "\n----- Create Presidential Form test -----\n";
	try
	{
		Bureaucrat b("Me No Drakes", 1);
		Intern i;
		Form* f;

		f = i.makeForm("Presidential request", "Arthur");
		std::cout << b;
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
	}
	catch(std::exception &e)
	{
		std::cerr<< e.what();
	}
}