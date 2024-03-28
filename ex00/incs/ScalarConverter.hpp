#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include "ScalarConverterUtils.hpp"

class ScalarConverter {
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &obj);
		ScalarConverter& operator=(ScalarConverter const &obj);
	public:
		static void convert(std::string input);
};

#endif