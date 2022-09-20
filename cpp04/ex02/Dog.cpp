#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    this->own_brain = new Brain;
    std::cout << "Dog Default Contructor called." << std::endl;
}

Dog::Dog (const Dog &copy) : AAnimal(copy){
     this->type = copy.getType();
    this->own_brain = new Brain;
    *(this->own_brain) = *copy.own_brain;
    for (int n = 0; n < 100; n++){
        this->own_brain->ideas[n] = copy.own_brain->ideas[n];
    }
    std::cout << "Dog Copy constructer called" << std::endl;
}

Dog::~Dog (){
    delete this->own_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "BARK! BARK!"<< std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->own_brain);
}

void    Dog::addIdea(std::string idea)
{
    for (int n = 0; n < 100; n++){
        if (this->own_brain->ideas[n].size() == 0){
            this->own_brain->ideas[n] = idea;
            std::cout << "idea added!" << std::endl;
            return;
        }
    }
    std::cout << "ideas full"<< std::endl;
}

void    Dog::printIdeas(void){
     for (int n = 0; n < 100; n++){
        if (this->own_brain->ideas[n].size()  != 0 ){
            std::cout << n << "\t" << this->own_brain->ideas[n] << std::endl;
        }
    }
}

void Dog::f(){}