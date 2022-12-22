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
