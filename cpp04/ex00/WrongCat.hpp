#ifndef CAT_H
# define CAT_H
# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

public:
	WrongCat(  );
    WrongCat( const WrongCat &copy);
	~WrongCat( void ); 

    void makeSound();

};

#endif