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

    Brain*	getBrain( void ) const;
    void makeSound() const;
    void addIdea(std::string idea);
    void printIdeas(void);
private:
    Brain* own_brain;

};

#endif