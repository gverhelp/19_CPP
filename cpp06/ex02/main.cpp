#include <cstdlib>
#include <typeinfo>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    srand(time(NULL));
    int a = rand() % 3;
    switch (a)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
    }
    return (NULL);
}

void identify(Base* p)
{
    std::cout << "Identify function with ptr: ";
    if (dynamic_cast<A*>(p))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Class B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Class C" << std::endl;
    else
        std::cout << "No type" << std::endl;
}

void identify(Base& p)
{
    std::cout << "Identify function with reference: " << std::endl;
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Class A" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        std::cout << "Error Class A : " << e.what() << std::endl;
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Class B" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        std::cout << "Error Class B : " << e.what() << std::endl;
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Class C" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        std::cout << "Error Class C : " << e.what() << std::endl;
    }
}

int main()
{
    Base* b;
    b = generate();
    identify(b);
    identify(*b);
    delete b;
    return (0);
}