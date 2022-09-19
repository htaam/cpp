#ifndef DOG_H
# define DOG_H
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{

public:
	Dog(  );
    Dog( const Dog &copy);
	~Dog( void ); 


    void makeSound() const;
private:
    Brain* own_brain;

};

#endif