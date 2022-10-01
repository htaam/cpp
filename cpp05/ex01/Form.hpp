#ifndef FORM_H
# define FORM_H
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    public:
        Form();
        Form(const std::string &name, int gradeSig, int gradeEx);
        Form( const Form& og);
        ~Form();
        Form & operator=(const Form &op);
        

        const std::string getName() const; //returns the name of the form
        bool getSig() const; //returns a bool of the signed status
        std::string getStringSig(); //returns a string with the signed status
        int getGradeSig() const; //returns the value of the grade needed to Sign
        int getGradeEx() const; // returns the value of the grade needed to execute
        
        void beSigned(Bureaucrat B); //Bureaucrat B tries to sign the form. If sucessful updates sig
    private:
        const std::string name; //name of the form
        static const int lowestGrade = 150;
        static const int hightestGrade = 1;
        bool sig;   //if it has ben signed or not. 0 for unsigned and 1 for signed
        const int gradeSig; //grade needed to sign. 
        const int gradeEx; //grade needed to execute
        void checkGrade();//checks the grade and throws exceptions
    public:
    
        class GradeTooHighException : public std::exception{
            //exception if frade too high (values below 1)
            public:
                virtual const char* what() const throw()
                {
                    return ("The grade is too hight");
                }
        };
        class GradeTooLowException: public std::exception{
        //exception if grade to low (values above 150)
            public:
                virtual const char* what() const throw()
                {
                    return ("The grade is too low");
                }
        };

};

std::ostream	&operator<<( std::ostream &ostr,Form const  &instance );

#endif