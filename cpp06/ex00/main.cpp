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

/*
static_cast is the first cast you should attempt to use.
It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).*/