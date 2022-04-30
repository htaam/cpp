#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name );

int main()
{	
	int N = 5;

	std::cout << "Creating the first Zombie, One, \"manually\"" << std::endl;

		Zombie	One;
		One.newName("One");
		One.announce();

	std::cout << "Creating the first Zombie Horde, of " << N << " Zombielings" << std::endl;

		Zombie *Horde = zombieHorde(N ,"Zombieling");
		for (int n = 0; n < N; n++)
		{
			Horde[n].announce();
		}
		delete [] Horde;




}