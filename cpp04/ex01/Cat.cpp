#include "Cat.hpp"

Cat::Cat(){
    this->type =  "Cat";
    this->own_brain = new Brain;
    std::cout << "Cat Default Contructor called." << std::endl;
}

Cat::Cat (const Cat &copy) : Animal(copy){
    *this = copy;
    std::cout << "Cat Copy constructer called" << std::endl;
}

Cat::~Cat (){
    delete this->own_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "NYA!!!!!!!!!!"<< std::endl;
}
