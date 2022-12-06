#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShrubberyCreationForm", 145, 137), target(_target){
    std::cout << this << " was created with target -> " << target<<std::endl;
}