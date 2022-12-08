#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Default constructor of Interned called" << std::endl;
    return;
}

Intern::~Intern(){
    std::cout << "Intern deconstructor called";
    return;
}

Intern::Intern( Intern &og){
    *this = og;
    std::cout << "Intern copy constructor called. They are the same" << std::endl;
    return;
}


AForm *Intern::makeForm(const std::string &formName, const std::string &target) const{
    const std::string	types[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        if (formName == types[i])
        {
            n = i;
        }
    }
    
    switch (n){
        case (0):{
            AForm* SBF =  new ShrubberyCreationForm(target);
            return (SBF); 
        }
        case (1):{
            AForm* RRF = new RobotomyRequestForm(target);
            return (RRF);   
        }
        case (2):{
            AForm* PPF =  new PresidentialPardonForm(target);
            return (PPF);
        }
        case (3):{
            AForm* invalid =NULL;
            std::cout << "Invalid form name"<<std::endl;
            return (invalid);  
        }
    }
    return(NULL);
}   

Intern &	Intern::operator=( Intern const & rhs )
{
	(void)rhs;
    std::cout << "Assignement operator for Intern called" << std::endl;
	return *this;
}

