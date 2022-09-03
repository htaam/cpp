#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"
class HumanB{

public:
	HumanB( std::string name);
	~HumanB( void );
    void attack();
    Weapon *Arm;
    void setWeapon(Weapon &Weapon);
    private:
        int i;
        std::string name;
};

#endif