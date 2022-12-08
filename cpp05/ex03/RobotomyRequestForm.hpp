#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
#include "AForm.hpp"

class RobotomyRequestForm: public AForm{

    public:
        RobotomyRequestForm(std::string _target);
        virtual ~RobotomyRequestForm( void );
        RobotomyRequestForm( const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=( RobotomyRequestForm const & rhs );

        const std::string &get_target() const; //returns the target of the form.
        void execute(Bureaucrat const & executor) const; //checks and executes the form on the target if the bureacrat is valid and the form is signed.    
    private:
        RobotomyRequestForm();
        const std::string target;
};


#endif