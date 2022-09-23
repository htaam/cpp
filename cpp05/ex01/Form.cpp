#include "Form.hpp"

Form::Form(void):name(""), gradeSig(lowestGrade),gradeEx(lowestGrade){
    std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const std::string &name, int gradeSig, int gradeEx):name(name), gradeSig(gradeSig), gradeEx(gradeEx){
    checkGrade();
    std::cout << "Form Standart Constructor called. Its named "<< getName();
    std::cout << ", has a minimum signing grade of " << this->getGradeSig();
    std::cout << " and a minimum execution grade of "<< this->getGradeEx() << std::endl;
}

Form::~Form(){
    std::cout << "Default destructor called for "<< this->getName() << std::endl;
}