#include "Bureaucrat.hpp"

int main(){
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