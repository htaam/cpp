#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm{

    public:
        ShrubberyCreationForm(std::string _target);
        virtual ~ShrubberyCreationForm( void );
        ShrubberyCreationForm( const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=( ShrubberyCreationForm const & rhs );

        const std::string &get_target() const; //returns the target of the form.
        void execute(Bureaucrat const & executor) const; //checks and executes the form on the target if the bureacrat is valid and the form is signed.    
    private:
        ShrubberyCreationForm();
        const std::string target;
};


#endif