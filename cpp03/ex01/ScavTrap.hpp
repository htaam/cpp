#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

public:
	ScavTrap(  const std::string n );
    ScavTrap( const ScavTrap &copy);
	~ScavTrap( void ); 

    ScavTrap & operator=(const ScavTrap &op);

    void attack(const std::string& target);
    void guardGate();
private:

};

#endif