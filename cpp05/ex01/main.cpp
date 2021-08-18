#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	b("Garreth", 100);
	Form		f("Contract", 90, 90);

	std::cout << b;
    std::cout << f;
	b.signForm(f);
	for (int i = 0; i < 10; i += 1)
	{
		b.increment();
        std::cout << b;
	}
	b.signForm(f);
    std::cout << f;
	b.signForm(f);

}