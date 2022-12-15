#include <cstring>
#include <iostream>
#include "Converter.hpp"

int main(int argc, char *argv){
    try
    {
        if (argc !=2)
            throw (Converter::EmptyInput());
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        std::cout << "./convert {char, int, float or double}" << std::endl;

    }
    

}