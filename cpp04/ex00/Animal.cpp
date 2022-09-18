#include "Animal.hpp"

Animal::Animal(){
    
    std::cout << "Default Animal Contructor called."<< std::endl;
}

Animal::Animal (const Animal &copy){
    this->type = copy.type;
    std::cout << "Copy Animal constructer called" << std::endl;
}

Animal::~Animal (){
    std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal& op)
{
    std::cout << "Animal Assignment operator overloader called" << std::endl;
    this->type = op.type;
    return (*this);
}

std::string Animal::getType(){
    return (this->type);
}

void Animal::makeSound(){
    if (this->getType() == "Cat")
        std::cout << "NYA!!!!!!!!!!"<< std::endl;
    else if (this->getType() == "Dog")
        std::cout << "BARK! BARK!"<< std::endl;
    else
        std::cout << "Makes no noise!"<< std::endl;
}
