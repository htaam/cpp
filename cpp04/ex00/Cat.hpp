#ifndef Cat_H
# define Cat_H
# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat: public Animal{

public:
	Cat(  );
    Cat( const Cat &copy);
	~Cat( void ); 

    Cat & operator=(const Cat &op);


};

#endif