#include "AAnimal.hpp"

AAnimal::AAnimal(): type(""){
    
    std::cout << "Default AAnimal Contructor called."<< std::endl;
}

AAnimal::AAnimal (const AAnimal &copy){
    this->type = copy.getType();
    std::cout << "Copy AAnimal constructer called" << std::endl;
}

AAnimal::~AAnimal (){
    std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal& op)
{
    std::cout << "AAnimal Assignment operator overloader called" << std::endl;
    this->type = op.getType();
    return (*this);
}

const std::string AAnimal::getType() const{
    return (this->type);
}

void AAnimal::makeSound() const{
    std::cout << "Makes no noise!"<< std::endl;
}
