#include "Harl.hpp"

Harl::Harl( void ){
	return ;
}

Harl::~Harl(void){
	std::cout << "Harl is destroyed\n";
	return ;
}

void Harl::debug( void ){
std::cout << "[DEBUG]I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<< std::endl << std::endl;
}

void Harl::info( void ){
std::cout << "[INFO]I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void ){
std::cout << "[WARRNING]I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error( void ){
std::cout << "[ERROR]This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*complains[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					n = 4;
    
    for (int i = 0; i < 4 && n == 4; i++)
	{
		if (level == levels[i])
			n = i;
	}

	if (n < 4)
		(this->*(complains[n]))();
	else
		std::cout << "[INVALID LEVEL]Invalid level. Try again." << std::endl << std::endl;
}
