#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>

class Zombie{

public:
	Zombie( std::string new_name );
	~Zombie( void );
	void anounce ( void );
private:
	std::string name;


};

#endif