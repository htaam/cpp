#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>
# include <iomanip>

class Weapon{

public:
	Weapon( void );
	~Weapon( void );
	const std::string &getType();
	void setType ( std::string newType );
private:
	std::string type;
};

#endif