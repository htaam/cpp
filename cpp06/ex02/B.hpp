#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B: public Base
{

public:

	B( void );
	B( const B &og );
	~B( void );

	B	&operator=( const B &op );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const B &i );

#endif