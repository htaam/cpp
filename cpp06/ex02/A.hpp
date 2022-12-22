#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A: public Base
{

public:

	A( void );
	A( const A &og );
	~A( void );

	A	&operator=( const A &op );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const A &i );

#endif