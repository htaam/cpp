#include "Form.hpp"


Form::Form(const std::string &_name, int _gradeSig, int _gradeEx):name(_name), gradeSig(_gradeSig), gradeEx(_gradeEx), sig(false){
    checkGrade();
    std::cout << "Form Standart Constructor called. Its named "<< getName();
    std::cout << ", has a minimum signing grade of " << this->getGradeSig();
    std::cout << " and a minimum execution grade of "<< this->getGradeEx() << std::endl;
}

Form::~Form(){
    std::cout << "Default destructor called for "<< this->getName() << std::endl;
}

Form::Form(const Form& og):name(og.name), gradeSig(og.gradeSig), gradeEx(og.gradeEx), sig(og.sig){
    std::cout << "Form copy constructor called" << std::endl;
}

Form & Form::operator=(const Form &op){
    this->sig = op.sig;
    std::cout << "Assigment opertator called. Sig status got copied, Grades and Name are constant and are unchanged" << std::endl;
    return *this;
}

void Form::checkGrade(){
    if(gradeEx < this->hightestGrade)
        throw Form::GradeTooHighException();
    else if(gradeSig < this->hightestGrade)
        throw Form::GradeTooHighException();
    else if (gradeEx > this->lowestGrade)
        throw Form::GradeTooLowException();
    else if (gradeSig > this->lowestGrade)
        throw Form::GradeTooLowException();
}

const std::string Form::getName() const{
    return this->name;
}

bool Form::getSig() const{
    return this->sig;
}

std::string Form::getStringSig(){
    if (getSig())
        return "SIGNED";    
    return "UNSIGNED";
}


int Form::getGradeEx() const{
    return this->gradeEx;
}

int Form::getGradeSig() const{
    return this->gradeSig;
}

void Form::beSigned(Bureaucrat B){
    
        if (getSig()){
            std::cout << "Form " << getName() << " already signed." << std::endl;
        }
        else{
            try{
                if (!(B.signForm(this->getGradeSig()))){     
                    throw Form::GradeTooLowException();
                }
            }    
            catch (const std::exception& e)
            {
                                   std::cout << B.getName() << " could not sign " << this->getName() <<" becouse grade too low" << std::endl;
                sig = 0;
            }
            std::cout << B.getName() << " signed " << this->getName() << std::endl;
            sig = 1;
        }
}

std::ostream	&operator<<( std::ostream &ostr,  Form const &instance ){
    ostr << instance.getName() << ", sign grade " << instance.getGradeSig() << ", execution grade " << instance.getGradeEx() << ", sign status " << (instance.getSig() == 1 ? "SIGNED." : "Unsigned.");
    return (ostr);
}
