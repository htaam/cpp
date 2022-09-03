#include "HumanB.hpp"

HumanB::HumanB( std::string newName ):  name(newName){
	this->i = 0;
	return ;
}


HumanB::~HumanB(void){
	std::cout << name << " is destroyed\n";
	return ;
}

void HumanB::setWeapon(Weapon &Weapon){
	this->Arm = &Weapon;
	this->i = 1;	
}


void HumanB::attack( void ){

	if (this->i){
    	std::cout << this->name << " attacks with their " << this->Arm->getType() << std::endl;
	}
	else{
		std::cout << this->name << " has no weapon" << std::endl;
	}
}
