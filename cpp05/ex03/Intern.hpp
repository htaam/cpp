#ifndef INTERN_H
# define INTERN_H

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
public:
    Intern();
    ~Intern();
    Intern(Intern &og);
    Intern  &operator=( const Intern &rhs );
    AForm   *makeForm(const std::string &formName, const std::string &target) const;
};


#endif
