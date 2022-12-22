#include <iostream>
#include <limits>
#include <cmath>
#include "utils.hpp"


bool	canConvertToInt( double number )
{
	return (number <= std::numeric_limits<int>::max()
			&& number >= std::numeric_limits<int>::min()
			&& number != std::numeric_limits<double>::infinity()
			&& number != -std::numeric_limits<double>::infinity()
			&& number != std::numeric_limits<double>::quiet_NaN());
}

bool	canConvertToFloat( double number )
{
	return ((number <= std::numeric_limits<float>::max()
			&& number >= -std::numeric_limits<float>::max())
			|| number == std::numeric_limits<double>::infinity()
			|| number == -std::numeric_limits<double>::infinity()
			|| std::isnan(number));
}

bool canConvert_char(double number){
	if (number - static_cast<int>(number) !=0 || number > 127 || number < 0)
		std::cout << "char: impossible" << std::endl;
	else if (number <=31 || number == 127)
		std::cout << "char: Non Displayable" << std::endl;
	else
		return true;
	return false;
}
