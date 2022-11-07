#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int		random;
	Base	*generate;

	random = rand() % 3;
	switch (random)
	{
		case 0:
			generate = new A;
			break;
		case 1:
			generate = new B;
			break;
		case 2:
			generate = new C;
			break;
	}
	return (generate);
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "Pointer: A" << std::endl;
	else if (b)
		std::cout << "Pointer: B" << std::endl;
	else if (c)
		std::cout << "Pointer: C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "Reference: A\n" << std::endl;
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "Reference: B\n" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "Reference: C\n" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

int	main(void)
{
	int		i;
	Base	*base;

	i= 0;
	srand(time(NULL));
	while (i < 50)
	{
		base = generate();
		identify(base);
		identify(*base);
		delete (base);
		i++;
	}
	return (0);
}