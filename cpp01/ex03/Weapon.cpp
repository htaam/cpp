#include "Weapon.hpp"

Weapon::Weapon( void ){
	
	return ;
}


Weapon::~Weapon(void){
	std::cout << type << " is destroided\n";
	return ;
}

const std::string &Weapon::getType(void){
	
    return (this->type);
}

void Weapon::setType(std::string newType){
    
    this->type = newType;
}