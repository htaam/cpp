#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete meta;
	delete cat;
	delete dog;

	std::cout << "_______________________" << std::endl;
	int n = 4;
	Animal* all[n];

	for (int i = 0; i < n ; i++)
	{
		std::cout <<"i = " << i << std::endl;
		if (i%2){
			all[i] = new Cat();
			all[i]->makeSound();
		}
		else{
			all[i] = new Dog();
			all[i]->makeSound();
		}
	}
	for (int i = 0; i < n ; i++)
	{
		std::cout <<"i = " << i << std::endl;
		if (i%2){
			delete all[i];
		}
		else{
			delete all[i];
		}
	}
}