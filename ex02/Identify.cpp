#include "Identify.hpp"

Base	*generate(void) {
	std::srand(static_cast<unsigned>(std::time(0)));
	int	randNum = 0;
	randNum = rand() % 3;

	switch (randNum) {
		case 0:
			return new A();
			break ;
		case 1:
			return new B();
			break ;
		case 2:
			return new C();
			break ;
		default:
			return (NULL);
	}
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "type: A" << std::endl;
	else if (dynamic_cast <B*>(p) != NULL)
		std::cout << "type: B" << std::endl;
	else if (dynamic_cast <C*>(p) != NULL)
		std::cout << "type: C" << std::endl;
}

void	identify(Base &p) {
	try {
		Base base = dynamic_cast<A&>(p);
		std::cout << "type: A" << std::endl;
	}
	catch (const std::exception &e){}

	try {
		Base base = dynamic_cast<B&>(p);
		std::cout << "type: B" << std::endl;
	}
	catch (const std::exception &e){}

	try {
		Base base = dynamic_cast<C&>(p);
		std::cout << "type: C" << std::endl;
	}
	catch (const std::exception &e){}
}