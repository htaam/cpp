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
    Brain* getBrain( void ) const;
    void addIdea(std::string idea);
    void printIdeas(void);
private:
    Brain* own_brain;
};

#endif