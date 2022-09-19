#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{ // proving that that the classes work and can be deleted
		const AAnimal* meta = new AAnimal();
		const AAnimal* dog = new Dog();
		const AAnimal* cat = new Cat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();
		delete meta;
		delete cat;
		delete dog;
	}
	std::cout << "_______________________" << std::endl;
	{	// creates the asked AAnimal array and deletes it all at the end.
		int n = 4;
		AAnimal* all[n];

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
	std::cout << "_______________________" << std::endl;
	{ // proving that cat is not shallow
		Cat og;
		og.addIdea("food");
		og.printIdeas();
		og.addIdea("bird");
		og.printIdeas();
		Cat *copy = new Cat(og);
		og.makeSound();
		copy->printIdeas();
		delete copy;
		og.printIdeas();
		og.makeSound();	
	}	
	std::cout << "_______________________" << std::endl;
	{ // proving that dog is not shallow
		Dog og;
		og.addIdea("food");
		og.printIdeas();
		og.addIdea("squirel");
		og.printIdeas();
		Dog *copy = new Dog(og);
		og.makeSound();
		copy->printIdeas();
		delete copy;
		og.printIdeas();
		og.makeSound();	
	}

	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
}
