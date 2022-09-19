#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include <string>

class Animal{

public:
	Animal( );
    Animal( const Animal &copy);
	virtual ~Animal( void ); 
    Animal & operator=(const Animal &op);
    const std::string getType() const;
    virtual void makeSound() const;
protected:
    std::string type;
};

#endif