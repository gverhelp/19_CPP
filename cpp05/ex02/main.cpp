#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));
	Bureaucrat 				b("Pierro le fou", 26);
	PresidentialPardonForm	PresidentialForm("Garreth");
	RobotomyRequestForm		RobotomyForm("Lomesal");
	ShrubberyCreationForm	ShrubberyForm("Mon jardin");

	std::cout << "\n----- Presidential Form -----\n";
	std::cout << b;
	std::cout << PresidentialForm;
	b.executeForm(PresidentialForm);
	b.signForm(PresidentialForm);
	b.executeForm(PresidentialForm);
	std::cout << PresidentialForm;

	std::cout << "\n----- Robotomy Form -----\n";
	std::cout << b;
	std::cout << RobotomyForm;
	b.executeForm(RobotomyForm);
	b.signForm(RobotomyForm);
	b.executeForm(RobotomyForm);
	std::cout << RobotomyForm;

	std::cout << "\n----- Shrubbery Form -----\n";
	std::cout << b;
	std::cout << ShrubberyForm;
	b.executeForm(ShrubberyForm);
	b.signForm(ShrubberyForm);
	b.executeForm(ShrubberyForm);
	std::cout << ShrubberyForm;

	return (0);
}