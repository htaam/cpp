#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->type = "Cat";
    std::cout << "Cat Default Contructor called." << std::endl;
}

Cat::Cat (const Cat &copy): Animal(copy){
    std::cout << "Cat Copy constructer called" << std::endl;
}

Cat::~Cat (){
    std::cout << "Cat Destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat& op)
{
    std::cout << "Cat Assignment operator overloader called" << std::endl;
    this->type = op.type;
    return (*this);
}
