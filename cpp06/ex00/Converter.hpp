#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

class Converter{
    private:
    Converter(); //standart constructor. never used.
    const std::string str; //stores the input string;
    
    public:
        Converter(std::string const &value); //constructor that takes a string. the one actualy used.
        Converter(Converter &og); //copy constructor
        Converter &operator=(Converter cont &og); //copy assignment constructor
        virtual ~Converter(); //destructor

}

#endif