#ifndef IDENTIFY_HPP
#define	IDENTIFY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <unistd.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif