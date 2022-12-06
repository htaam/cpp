#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm{

    public:
        ShrubberyCreationForm(std::string _target);
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm( const ShrubberyCreationForm &copy);
        
        void execute(Bureaucrat const & executor) const; //checks and executes the form on the target if the bureacrat is valid and the form is signed.    
    private:
        const std::string target;
};


#endif