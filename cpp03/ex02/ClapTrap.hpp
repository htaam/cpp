#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>

class ClapTrap{

public:
	ClapTrap(std::string n );
    ClapTrap( const ClapTrap &copy);
	~ClapTrap( void ); 
    ClapTrap & operator=(const ClapTrap &op);

    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName();

protected:
    std::string name;
    int HitPoints;
    int EnergyPoints;
    int AtackDamage;
};

#endif