#include "Animal.hpp"

Animal::Animal(): type(""){
    
    std::cout << "Default Animal Contructor called."<< std::endl;
}

Animal::Animal (const Animal &copy){
    this->type = copy.getType();
    std::cout << "Copy Animal constructer called" << std::endl;
}

Animal::~Animal (){
    std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal& op)
{
    std::cout << "Animal Assignment operator overloader called" << std::endl;
    this->type = op.getType();
    return (*this);
}

const std::string Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    std::cout << "Makes no noise!"<< std::endl;
}
