#include "Converter.hpp"

Converter Converter():str(""){ //standart constructor. never used.
    ;
}
Converter Converter(std::string const &value):str(value){
    std::cout << "Constructor called. str value is " << str << std::endl;
} //constructor that takes a string. the one actualy used.

Converter Converter(Converter &og){

} //copy constructor
Converter &operator=(Converter cont &og); //copy assignment constructor
virtual ~Converter(); //destructor