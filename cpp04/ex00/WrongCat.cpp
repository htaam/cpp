#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type =  "WrongCat";
    std::cout << "WrongCat Default Contructor called." << std::endl;
}

WrongCat::WrongCat (const WrongCat &copy) : WrongAnimal(copy){
    *this = copy;
    std::cout << "WrongCat Copy constructer called" << std::endl;
}

WrongCat::~WrongCat (){
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound(){
    std::cout << "NYArrrrrrrrrr!!!!!!!!!!"<< std::endl;
}
