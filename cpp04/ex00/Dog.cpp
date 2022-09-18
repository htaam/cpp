#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
    std::cout << "Dog Default Contructor called." << std::endl;
}

Dog::Dog (const Dog &copy): Animal(copy){
    std::cout << "Dog Copy constructer called" << std::endl;
}

Dog::~Dog (){
    std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog& op)
{
    std::cout << "Dog Assignment operator overloader called" << std::endl;
    this->type = op.type;
    return (*this);
}
