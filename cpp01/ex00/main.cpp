#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{

	std::cout << "Creating the first Zombie, One, \"manually\"" << std::endl;

		Zombie	One("One");
		One.announce();

	std::cout << "Creating the second Zombie, Two, using the function newZombie" << std::endl;

		Zombie	*Two = newZombie("Two");
		Two->announce();
		delete Two;
	
	std::cout << "Creating the third Zombie, Three, using the function randomChump" << std::endl;
		randomChump("Three");

}