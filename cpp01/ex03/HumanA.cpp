#include "HumanA.hpp"

HumanA::HumanA( std::string newName , Weapon &weapon ):  Arm(weapon), name(newName){

	return ;
}


HumanA::~HumanA(void){
	std::cout << name << " is destroided\n";
	return ;
}


void HumanA::attack( void ){
    
    std::cout << this->name << " attacks with their " << this->Arm.getType() << std::endl;
}