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
        

        const std::string getName();
        bool getSig();
        const int getGradeSig();
        const int getGradeEx();
        
        void beSigned(Bureaucrat B); //Bureaucrat B tries to sign the form.
    private:
        const std::string name; //name of the form
        static const int lowestGrade = 150;
        static const int hightestGrade = 1;
        bool sig;   //if it has ben signed or not
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

#endif

std::ostream	&operator<<( std::ostream &ostr,Form const  &instance );