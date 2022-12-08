#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <cstdlib>


int main(){

   ShrubberyCreationForm SBF("target");

   Bureaucrat Jo("Jo", 150);
   int i = 0;
   while (Jo.executeAForm(SBF) == false)
   {
        std::cout<< i  << " " << Jo <<std::endl;
        i++;
        if (SBF.getSig() == false)
            SBF.beSigned(Jo);
        Jo.incrementGrade(1);
   }

    RobotomyRequestForm RRF("Joy");
    i = 0;
    while (Jo.executeAForm(RRF) == false)
    {
        std::cout<< i << " " << Jo <<std::endl;
        i++;
        if (RRF.getSig() == false)
            RRF.beSigned(Jo);
        Jo.incrementGrade(1);
    }

    PresidentialPardonForm PPF("Joy");
    i = 0;
    while (Jo.executeAForm(PPF) == false)
    {
        std::cout<< i << " " << Jo <<std::endl;
        i++;
        if (PPF.getSig() == false)
            PPF.beSigned(Jo);
        Jo.incrementGrade(1);
    }
    
    
}

