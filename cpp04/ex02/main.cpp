#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{ 
		// proving that that the classes work and can be deleted

		//AAnimal is now abstract meaning i cant create an object of it type.
		//const AAnimal* meta = new AAnimal();
		const AAnimal* dog = new Dog();
		const AAnimal* cat = new Cat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		//meta->makeSound();
		cat->makeSound();
		dog->makeSound();
		//delete meta;
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
		std::cout << "og ideas" << std::endl;
		og.printIdeas();
		Cat *copy = new Cat(og);
		og.makeSound();
		std::cout << "copy ideas" << std::endl;
		copy->printIdeas();
		og.addIdea("bird2");
		std::cout << "og ideas" << std::endl;
		og.printIdeas();
		std::cout << "copy ideas" << std::endl;
		copy->printIdeas();
		copy->makeSound();	
		delete copy;
	}	
	std::cout << "_______________________" << std::endl;
	{ // proving that dog is not shallow
		Dog og;
		og.addIdea("food");
		og.printIdeas();
		og.addIdea("squirel");
		std::cout << "og ideas" << std::endl;
		og.printIdeas();
		Dog copy =  og;
		og.makeSound();
		std::cout << "copy ideas" << std::endl;
		copy.printIdeas();
		og.addIdea("squirel2");
		std::cout << "og ideas" << std::endl;
		og.printIdeas();
		std::cout << "copy ideas" << std::endl;
		copy.printIdeas();
		copy.makeSound();	
		//delete copy;
	}
	std::cout << "_______________________" << std::endl;
	{
		Dog dogo;
		Cat cato;
		dogo.addIdea("ball");
		for (int i = 0; i < 100; i++)
		{
			(i % 2 == 0 ? dogo.addIdea("squirel") : dogo.addIdea("squirel2"));
		}
		dogo.addIdea("ball");
		dogo.printIdeas();
	}
	std::cout << "_______________________" << std::endl;
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
}
