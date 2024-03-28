#ifndef SCALARCONVERTERUTILS_HPP
# define SCALARCONVERTERUTILS_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <cctype>
#include <limits>
#include <cstdlib>

enum type {
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL,
	OTHER
};

class ScalarConverterUtils {
	private:
		ScalarConverterUtils();
		~ScalarConverterUtils();
		ScalarConverterUtils(const ScalarConverterUtils &obj);
		ScalarConverterUtils &operator=(const ScalarConverterUtils &obj);
	public:
		static std::string	trim(const std::string &input);
		static int	getType(const std::string &input);
		static bool	isValidRangeChar(int num);
		static bool	isDisplayableChar(int num);
		static bool	onlyZeroBelowPoint(std::string input);
		static bool	isChar(const std::string &input);
		static bool	isInt(const std::string &input);
		static bool	isFloat(std::string input);
		static bool	isDouble(const std::string &input);
		static void	printConvertedChar(std::string input);
		static void	printConvertedInt(std::string input);
		static void	printConvertedFloat(std::string input);
		static void	printConvertedDouble(std::string input);
		static void	printSpecial(std::string input);
		static void	printDefault(void);
		class	RangeException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		class	charDisplayException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

#endif