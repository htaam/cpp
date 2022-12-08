#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>


int main(){

	Intern		usefulIdiot;
	Bureaucrat	paul("Paul", 1);
	AForm		*form;

	form = usefulIdiot.makeForm("this one doesn't exist", "something");
    if (form)
		delete form;
	form = usefulIdiot.makeForm("PresidentialPardon", "Paul");
    form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;
	form = usefulIdiot.makeForm("ShrubberyCreation", "TREES");
    form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;
	form = usefulIdiot.makeForm("RobotomyRequest", "ClapTrap");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;    
}

