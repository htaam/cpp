#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(){

   const AForm* shrub= new ShrubberyCreationForm("target");
    std::cout << shrub<< std::endl;
}

