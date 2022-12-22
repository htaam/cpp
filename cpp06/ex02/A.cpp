#include "A.hpp"

A::A( void )
{
	std::cout << "Default constructor for A called" << std::endl;
	return;
}

A::A( A const & og )
{
	std::cout << "Copy constructor for A called" << std::endl;
	*this = og;
	return;
}

A::~A( void )
{
	return;
}

A &	A::operator=( A const & op )
{
	(void)op;
	std::cout << "Assignement operator for A called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, A const & i)
{
	(void)i;
	ostr << "This is type A";
	return ostr;
}
