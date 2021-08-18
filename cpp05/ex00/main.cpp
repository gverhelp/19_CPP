#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("Garreth", 200);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Lomesal", -7);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}

	Bureaucrat b("Me No Drakes", 150);
	for (int i = 0; i < 155; i++)
	{
		std::cout << b;
		try
		{
			b.increment();
		}
		catch(const std::exception& exc)
		{
			std::cerr << exc.what() << std::endl;
		}
	}
	for (int i = 0; i < 155; i++)
	{
		std::cout << b;
		try
		{
			b.decrement();
		}
		catch(const std::exception& exc)
		{
			std::cerr << exc.what() << std::endl;
		}
	}
}