#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include <string>

class Animal{

public:
	Animal( );
    Animal( const Animal &copy);
	~Animal( void ); 
    Animal & operator=(const Animal &op);
    std::string getType();
    void makeSound();
protected:
    std::string type;
};

#endif