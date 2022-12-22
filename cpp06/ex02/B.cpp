#include "B.hpp"

B::B( void )
{
	std::cout << "Default constructor for B called" << std::endl;
	return;
}

B::B( B const & og )
{
	std::cout << "Copy constructor for B called" << std::endl;
	*this = og;
	return;
}

B::~B( void )
{
	return;
}

B &	B::operator=( B const & op )
{
	(void)op;
	std::cout << "Assignement operator for B called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, B const & i)
{
	(void)i;
	ostr << "This is type B";
	return ostr;
}