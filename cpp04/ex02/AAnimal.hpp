#ifndef AANIMAL_H
# define AANIMAL_H
# include <iostream>
# include <string>

class  AAnimal{

public:
	AAnimal( );
    AAnimal( const AAnimal &copy);
	virtual ~AAnimal( void ); 
    virtual AAnimal & operator=(const AAnimal &op);
    const std::string getType() const;
    virtual void makeSound() const;
protected:
    std::string type;
};

#endif