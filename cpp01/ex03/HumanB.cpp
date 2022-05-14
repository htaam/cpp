#include "HumanB.hpp"

HumanB::HumanB( std::string newName , Weapon *Weapon_ptr):  name(newName), Arm(Weapon_ptr){
	return ;
}


HumanB::~HumanB(void){
	std::cout << name << " is destroyed\n";
	return ;
}


void HumanB::attack( void ){

	if (Arm){
    	std::cout << this->name << " attacks with their " << this->Arm->getType() << std::endl;
	}
	else{
		std::cout << this->name << " has no weapon" << std::endl;
	}
}
