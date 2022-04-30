#include "HumanA.hpp"

HumanA::HumanA( std::string name , Weapon &weapon ): name(name), Arm(weapon){

	return ;
}


HumanA::~HumanA(void){
	std::cout << name << " is destroided\n";
	return ;
}

const std::string &Weapon::getType(void){
	
    return (this->type);
}

void HumanA::attack( void ){
    
    std::cout << this->name << "attacks with their " << this->Arm.getType() << std::endl;
}