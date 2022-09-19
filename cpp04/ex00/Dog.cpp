#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog Default Contructor called." << std::endl;
}

Dog::Dog (const Dog &copy) : Animal(copy){
    *this = copy;
    std::cout << "Dog Copy constructer called" << std::endl;
}

Dog::~Dog (){
    std::cout << "Dog Destructor called" << std::endl;
}


void Dog::makeSound() const{
    std::cout << "BARK! BARK!"<< std::endl;
}
