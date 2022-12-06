
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>

# include "Form.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Bureaucrat;
class Form;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Bureaucrat{
    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat( const Bureaucrat& og);
        ~Bureaucrat();
        Bureaucrat & operator=(const Bureaucrat &op);

        const std::string getName() const; //returns bureaucrats name
        int getGrade() const; //returns grade value

        void incrementGrade(int n); //increases (lowers value) of grade by n;
        void decrementGrade(int n); //decreses (raises value) of grade by n;
        bool signForm(const int MinSigGrade);//prints the name of the burecrat and the form if its sucesefully signed, returning true. if it cant sign it prints it couldnt and reuturns false;
    private:
        Bureaucrat(); // will never be used, objects must always be created with a name and grade 
        static const int lowestGrade = 150;
        static const int hightestGrade = 1;
        const std::string name; //name of the Bureucrat
        int grade; //grade values from 1 - 150 (Higher - Lower)
        void checkGrade();//checks the grade and throws exceptions
    public:
    
        class GradeTooHighException : public std::exception{
            //exception if frade too high (values below 1)
            public:
                virtual const char* what() const throw()
                {
                    return ("The grade was set too hight");
                }
        };
        class GradeTooLowException: public std::exception{
        //exception if grade to low (values above 150)
            public:
                virtual const char* what() const throw()
                {
                    return ("The grade was set too low");
                }
        };
};


std::ostream	&operator<<( std::ostream &ostr,Bureaucrat  const  &instance );

#endif
