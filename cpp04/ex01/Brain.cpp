#include "Brain.hpp"

Brain::Brain(){
    
    std::cout << "Default Brain Contructor called."<< std::endl;
}

Brain::Brain (const Brain &copy){
    *this =  copy;
    std::cout << "Copy Brain constructer called" << std::endl;
}

Brain::~Brain (){
    std::cout << "Brain Destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain& op)
{
    std::cout << "Brain Assignment operator overloader called" << std::endl;
    *this->ideas = *op.ideas;
    return (*this);
}