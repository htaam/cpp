#include <cstring>
#include <iostream>
#include "Converter.hpp"
#include "utils.hpp"

int main(int argc, char **argv){
    
    if (argc !=2)
    {    
        std::cerr << "Wrong number of inputs. Please add 1 (one) input value for this converter to work" << std::endl;
        std::cout << "./convert {char, int, float or double}" << std::endl;
        return(0);
    }
    Converter stuff(argv[1]);
    stuff.is_type();
    stuff.set_values();
    stuff.print_message();
}