#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    /*{
        {
            //tests to show the constructores and destructors work
            Bureaucrat Joey("Joey", 20);
            Bureaucrat John(Joey);
            std::cout << Joey << std::endl;
            std::cout << John << std::endl;
            John.decrementGrade(1);
            std::cout << Joey << std::endl;
            std::cout << John << std::endl;
            Bureaucrat Joseph("Joseph", 1);
            std::cout << Joseph << std::endl;
            Joseph = Joey;
            std::cout << Joseph << std::endl;
        }
        std::cout << "-------------------------" << std::endl;
        {
            try
            {
                Bureaucrat Joey("Joey", 0);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
        {
            try
            {
                Bureaucrat Joseph("Johseph", 151);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        {
            try
            {
                Bureaucrat John("John", 149);
                John.decrementGrade(2);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }

        try
            {
                Bureaucrat Jo("Jo", 149);
                Jo.incrementGrade(200);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
    }
    */
   std::cout << "-------------------------" << std::endl;
    {
        //tests to show the constructores and destructors work
            Form J01("J01", 20, 25);
            Form J02(J01);
            std::cout << J01 << std::endl;
            std::cout << J02 << std::endl;
            Form J03("J03", 1, 5);
            std::cout << J03 << std::endl;
            J03 = J01;
            std::cout << J03 << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    {
        { 
            Form D871("D871", 15, 15);
            std::cout << D871 << std::endl;
            Bureaucrat Jo ("Jo", 20);
            std::cout << Jo << std::endl;
            D871.beSigned(Jo);
            std::cout << D871 << std::endl;
            Bureaucrat Joy ("Joy", 10);
            std::cout << Joy << std::endl;
            D871.beSigned(Joy);
            std::cout << D871 << std::endl;
            D871.beSigned(Joy);
            std::cout << D871 << std::endl;

            Form X21 = D871;
            std::cout << X21 << std::endl;

            Form H23("H23", 12, 12);
            std::cout << H23 << std::endl;
            H23 = D871;
            std::cout << H23 << std::endl;
        }
    }
}