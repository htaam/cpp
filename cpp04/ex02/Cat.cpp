#include "Cat.hpp"

Cat::Cat(){
    this->type =  "Cat";
    this->own_brain = new Brain;
    std::cout << "Cat Default Contructor called." << std::endl;
}

Cat::Cat (const Cat &copy) : AAnimal(copy){
    this->type = copy.getType();
    this->own_brain = new Brain;
    *(this->own_brain) = *copy.own_brain;
    for (int n = 0; n < 100; n++){
        this->own_brain->ideas[n] = copy.own_brain->ideas[n];
    }
    std::cout << "Cat Copy constructer called" << std::endl;
}

Cat::~Cat (){
    delete this->own_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "NYA!!!!!!!!!!"<< std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->own_brain);
}

void    Cat::addIdea(std::string idea)
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

void    Cat::printIdeas(void){
     for (int n = 0; n < 100; n++){
        if (this->own_brain->ideas[n].size()  != 0 ){
            std::cout << n << "\t" << this->own_brain->ideas[n] << std::endl;
        }
    }
}