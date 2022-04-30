#include "Zombie.hpp"

Zombie::Zombie(std::string new_name): name(new_name){
	
	return ;
}


Zombie::~Zombie(void){
	std::cout << name << " is destroided\n";
	return ;
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}