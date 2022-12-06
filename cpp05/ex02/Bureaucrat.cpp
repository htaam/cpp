#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):name(""), grade(lowestGrade){
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade){
    checkGrade();
    std::cout << "Bureucrat Standart Constructor called. Its named " << this->getName();
    std::cout << " and has grade " << this->getGrade() << std::endl;
}


Bureaucrat::~Bureaucrat(){
    std::cout << "Default destructor called for " << this->getName() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& og) : name(og.name), grade(og.grade){
    std::cout << "Bureaucrat copy constructor called"<< std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &op){
    this->grade = op.grade;
    std::cout << "Assignement operator called. Grade was copied, Name is constant and was unchanged"<< std::endl;
    return *this;
}

void Bureaucrat::checkGrade(){
    if (grade < this->hightestGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > this->lowestGrade)
        throw Bureaucrat::GradeTooLowException();
}

const std::string Bureaucrat::getName() const{
    return this->name;
}

int Bureaucrat::getGrade() const{
    return grade;
}

void Bureaucrat::decrementGrade(int n)
{
    this->grade = this->grade + n;
    checkGrade();
}

void Bureaucrat::incrementGrade(int n)
{
    this->grade = this->grade - n;
    checkGrade();
}

bool Bureaucrat::signAForm(int MinSigGrade){
    int sigGrade = (int)MinSigGrade;
    if (this->getGrade() > sigGrade){
        return 0;
    }
    return 1;
}


std::ostream	&operator<<( std::ostream &ostr,  Bureaucrat const &instance ){
    ostr << instance.getName() << ", grade " << instance.getGrade() << ".";
    return (ostr);
}
