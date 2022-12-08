#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm():
    AForm("PPF", 25 , 5), target("")
{
    std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): 
    AForm("PPF", 25, 5), target(_target){
    std::cout << "Standard constructor for PresidentialPardonForm called" << std::endl;
    std::cout << this->getName() << " was created with target -> " << target<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
    std::cout << "PPF deconstructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy):
    AForm("PPF", 25, 5), target(copy.get_target())
{
    *this = copy;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	std::cout << "Can't copy anything" << std::endl;
	rhs.get_target();
	std::cout << "Assignement operator for PresidentialPardonForm called" << std::endl;
	return *this;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    this->check_executability(executor);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox."<< std::endl;
}



const std::string &PresidentialPardonForm::get_target() const{
    return (this->target);
}