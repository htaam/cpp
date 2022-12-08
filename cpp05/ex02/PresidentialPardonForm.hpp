#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
#include "AForm.hpp"

class PresidentialPardonForm: public AForm{

    public:
        PresidentialPardonForm(std::string _target);
        virtual ~PresidentialPardonForm( void );
        PresidentialPardonForm( const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=( PresidentialPardonForm const & rhs );

        const std::string &get_target() const; //returns the target of the form.
        void execute(Bureaucrat const & executor) const; //checks and executes the form on the target if the bureacrat is valid and the form is signed.    
    private:
        PresidentialPardonForm();
        const std::string target;
};


#endif