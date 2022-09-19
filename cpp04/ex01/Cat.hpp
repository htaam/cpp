#ifndef Cat_H
# define Cat_H
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal{

public:
	Cat(  );
    Cat( const Cat &copy);
	~Cat( void ); 

    void makeSound() const;
private:
    Brain* own_brain;
};

#endif