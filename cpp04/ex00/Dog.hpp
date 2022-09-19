#ifndef DOG_H
# define DOG_H
# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal{

public:
	Dog(  );
    Dog( const Dog &copy);
	~Dog( void ); 


    void makeSound() const;

};

#endif