#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout <<sp.longestSpan() << std::endl;
        
    }
    {
        Span sp_full = Span(2);

        sp_full.addNumber(5);
        sp_full.addNumber(8);
        
        try
        {
            sp_full.addNumber(9);     
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error : " << e.what() <<  std::endl;
        }  
    }
    {
        Span sp_empty = Span(80);
    
        try
        {
            std::cout << sp_empty.shortestSpan() << std::endl;
        }
            catch(const std::exception& e)
        {
            std::cerr << "Error : " << e.what() <<  std::endl;
        }

        sp_empty.addNumber(5);

        try
        {
            std::cout << sp_empty.shortestSpan() << std::endl;
        }
            catch(const std::exception& e)
        {
            std::cerr << "Error : " << e.what() <<  std::endl;
        }

    }
    {
        Span sp_long_long = Span(50000);
        std::vector<int> range(50000, 10);
        range[3256] = 40;
        sp_long_long.addNumber(range.begin(), range.end());
        try
        {
            std::cout << sp_long_long.longestSpan() << std::endl;
        }
            catch(const std::exception& e)
        {
            std::cerr << "Error : " << e.what() <<  std::endl;
        }

        try
        {
            std::cout << sp_long_long.shortestSpan() << std::endl;
        }
            catch(const std::exception& e)
        {
            std::cerr << "Error : " << e.what() <<  std::endl;
        }
    }
}
