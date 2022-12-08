#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():
    AForm("RobotomyRequest", 72 , 45), target("")
{
    std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): 
    AForm("RobotomyRequest", 72, 45), target(_target){
    std::cout << "Standard constructor for RobotomyRequestForm called" << std::endl;
    std::cout << this->getName() << " was created with target -> " << target<<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
    std::cout << "RobotomyRequest deconstructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy):
    AForm("RobotomyRequest", 72, 45), target(copy.get_target())
{
    *this = copy;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	std::cout << "Can't copy anything" << std::endl;
	rhs.get_target();
	std::cout << "Assignement operator for RobotomyRequestForm called" << std::endl;
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    this->check_executability(executor);
    std::cout << "Robotomy of " << this->target << " requested.\nInicializing..."<< std::endl;
    if (std::rand() % 2 == 1) {
        std::cout << "Robotomy was a success. " << this->target << " is now Robotomized"<< std::endl;
    }
    else{
        std::cout << "Robotomy failed. " << this->target << " may have not survived" << std::endl;
    }
}



const std::string &RobotomyRequestForm::get_target() const{
    return (this->target);
}