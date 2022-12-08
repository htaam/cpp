#ifndef AFORM_H
# define AFORM_H
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{

   public:
        AForm();
        AForm(const std::string &_name, int _gradeSig, int _gradeEx);
        AForm( const AForm& og);
        virtual ~AForm();
        virtual AForm & operator=(const AForm &op);

    private:
        const std::string name; //name of the AForm
        const int gradeSig; //grade needed to sign. 
        const int gradeEx; //grade needed to execute
        bool sig;   //if it has ben signed or not. 0 for unsigned and 1 for signed
        static const int lowestGrade = 150;
        static const int hightestGrade = 1;
        void checkGrade();//checks the grade and throws exceptions

    public:

        const std::string getName() const; //returns the name of the AForm
        bool getSig() const; //returns a bool of the signed status
        std::string getStringSig(); //returns a string with the signed status
        int getGradeSig() const; //returns the value of the grade needed to Sign
        int getGradeEx() const; // returns the value of the grade needed to execute
        void beSigned(Bureaucrat B); //Bureaucrat B tries to sign the AForm. If sucessful updates sig
        void check_executability( const Bureaucrat &executor )const;//checkes if executor can execute this form;
        virtual void	execute( const Bureaucrat &executor ) const = 0;
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
        class CantExecuteForm : public std::exception
            {
            public:
                virtual const char* what() const throw()
                {
                    return ("The form cannot be executed, either because it wasn't sign"
                            "ed, or because the executor has a rank too low");
                }
            };


};

std::ostream	&operator<<( std::ostream &ostr,AForm const  &instance );

#endif