#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>
# include <string>

class WrongAnimal{

public:
	WrongAnimal( );
    WrongAnimal( const WrongAnimal &copy);
	~WrongAnimal( void ); 
    WrongAnimal & operator=(const WrongAnimal &op);
    const std::string getType() const;
    void makeSound() const;
protected:
    std::string type;
};

#endif