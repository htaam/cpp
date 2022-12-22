#include "C.hpp"

C::C( void )
{
	std::cout << "Default constructor for C called" << std::endl;
	return;
}

C::C( C const & og )
{
	std::cout << "Copy constructor for C called" << std::endl;
	*this = og;
	return;
}

C::~C( void )
{
	return;
}

C &	C::operator=( C const & op )
{
	(void)op;
	std::cout << "Assignement operator for C called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, C const & i)
{
	(void)i;
	ostr << "This is type C";
	return ostr;
}
