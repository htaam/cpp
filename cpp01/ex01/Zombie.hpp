#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>

class Zombie{

public:
	Zombie( void );
	~Zombie( void );
	void newName(std::string newName);
	void announce ( void );
private:
	std::string name;
};

#endif