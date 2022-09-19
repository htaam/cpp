#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type(""){
    
    std::cout << "Default WrongAnimal Contructor called."<< std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal &copy){
    *this =  copy;
    std::cout << "Copy WrongAnimal constructer called" << std::endl;
}

WrongAnimal::~WrongAnimal (){
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& op)
{
    std::cout << "WrongAnimal Assignment operator overloader called" << std::endl;
    this->type = op.getType();
    return (*this);
}

const std::string WrongAnimal::getType() const{
    return (this->type);
}

void WrongAnimal::makeSound() const{
    std::cout << "This just sounds wrong"<< std::endl;
}
