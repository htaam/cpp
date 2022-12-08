#include "AForm.hpp"
AForm::AForm():name("NULL"), gradeSig(1), gradeEx(1){
    ;
}

AForm::AForm(const std::string &_name, int _gradeSig, int _gradeEx):name(_name), gradeSig(_gradeSig), gradeEx(_gradeEx), sig(false){
    checkGrade();
    std::cout << "AForm Standart Constructor called. Its named "<< getName();
    std::cout << ", has a minimum signing grade of " << this->getGradeSig();
    std::cout << " and a minimum execution grade of "<< this->getGradeEx() << std::endl;
}

AForm::~AForm(){
    std::cout << "Default AForm destructor called for "<< this->getName() << std::endl;
}

AForm::AForm(const AForm& og):name(og.name), gradeSig(og.gradeSig), gradeEx(og.gradeEx), sig(og.sig){
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm & AForm::operator=(const AForm &op){
    this->sig = op.sig;
    std::cout << "Assigment opertator called. Sig status got copied, Grades and Name are constant and are unchanged" << std::endl;
    return *this;
}

void AForm::checkGrade(){
    if(gradeEx < this->hightestGrade)
        throw AForm::GradeTooHighException();
    else if(gradeSig < this->hightestGrade)
        throw AForm::GradeTooHighException();
    else if (gradeEx > this->lowestGrade)
        throw AForm::GradeTooLowException();
    else if (gradeSig > this->lowestGrade)
        throw AForm::GradeTooLowException();
}

const std::string AForm::getName() const{
    return this->name;
}

bool AForm::getSig() const{
    return this->sig;
}

std::string AForm::getStringSig(){
    if (getSig())
        return "SIGNED";    
    return "UNSIGNED";
}


int AForm::getGradeEx() const{
    return this->gradeEx;
}

int AForm::getGradeSig() const{
    return this->gradeSig;
}

void	AForm::check_executability( const Bureaucrat &executor )const
{
	if (!this->sig || executor.getGrade() > this->gradeEx)
		throw AForm::CantExecuteForm();
}



void AForm::beSigned(Bureaucrat B){
    
        if (getSig()){
            std::cout << "AForm " << getName() << " already signed." << std::endl;
        }
        else{
            try{
                if (!(B.signAForm(this->getGradeSig()))){     
                    throw AForm::GradeTooLowException();
                }
                std::cout << B.getName() << " signed " << this->getName() << std::endl;
                sig = 1;
            }    
            catch (const std::exception& e)
            {
                                   std::cout << B.getName() << " could not sign " << this->getName() <<" becouse grade too low" << std::endl;
                sig = 0;
            }
            
        }
}

std::ostream	&operator<<( std::ostream &ostr,  AForm const &instance ){
    ostr << instance.getName() << ", sign grade " << instance.getGradeSig() << ", execution grade " << instance.getGradeEx() << ", sign status " << (instance.getSig() == 1 ? "SIGNED." : "Unsigned.");
    return (ostr);
}
