#include "HumanB.hpp"

HumanB::HumanB( std::string newName):  name(newName){
	return ;
}


HumanB::~HumanB(void){
	std::cout << name << " is destroided\n";
	return ;
}


void HumanB::attack( void ){
    
    std::cout << this->name << " attacks with their " << this->Arm.getType() << std::endl;
}