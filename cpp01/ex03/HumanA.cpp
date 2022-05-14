#include "HumanA.hpp"

HumanA::HumanA( std::string newName ,  Weapon &weapon_ref ):  name(newName), Arm_ref(weapon_ref){
	return ;
}


HumanA::~HumanA(void){
	std::cout << name << " is destroyed\n";
	return ;
}


void HumanA::attack( void ){
    
    std::cout << this->name << " attacks with their " << this->Arm_ref.getType() << std::endl;
}
