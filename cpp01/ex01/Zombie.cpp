#include "Zombie.hpp"

Zombie::Zombie(void) : name(""){
	
	return ;
}


Zombie::~Zombie(void){
	std::cout << name << " is destroyed\n";
	return ;
}

void Zombie::newName(std::string newName){

	this->name = newName;
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}