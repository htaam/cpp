#include "Weapon.hpp"

Weapon::Weapon( std::string newName ):  type(newName){
	
	return ;
}


Weapon::~Weapon(void){
	std::cout << type << " is destroyed\n";
	return ;
}

const std::string &Weapon::getType(void){
	
    return (this->type);
}

void Weapon::setType(std::string newType){
    
    this->type = newType;
}