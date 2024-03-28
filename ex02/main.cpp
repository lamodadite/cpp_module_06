#include "Identify.hpp"

int main()
{
	Base	*base = generate();
	identify(base);

	sleep(1);
	Base	*base2 = generate();
	identify(*base2);

	delete base;
	delete base2;
}