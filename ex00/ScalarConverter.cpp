#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) {*this = obj;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj) {
	(void)obj;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string input) {
	std::string trimedInput;
	int	type;

	trimedInput = ScalarConverterUtils::trim(input);
	type = ScalarConverterUtils::getType(trimedInput);
	std::cout << type << std::endl;
	switch (type) {
		case (CHAR):
			ScalarConverterUtils::printConvertedChar(trimedInput);
			break;
		case (INT):
			ScalarConverterUtils::printConvertedInt(trimedInput);
			break;
		case (FLOAT):
			ScalarConverterUtils::printConvertedFloat(trimedInput);
			break;
		case (DOUBLE):
			ScalarConverterUtils::printConvertedDouble(trimedInput);
			break;
		case (SPECIAL):
			ScalarConverterUtils::printSpecial(trimedInput);
			break;
		default:
			ScalarConverterUtils::printDefault();
	}
}