#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>
# include <utils.hpp>

class Converter{    
    public:
        Converter(); //standart constructor. never used.
        Converter(char* const &value); //constructor that takes a string. the one actualy used.
        Converter(const Converter &og); //copy constructor
        Converter & operator= (Converter const &og); //copy assignment constructor
        virtual ~Converter(); //destructor
    
        bool check_char(); //returns true if valid.
        bool check_int();//returns true if valid.
        bool check_float();//returns true if valid.
        bool check_double();//returns true if valid.
        void  is_type();//returns 1 for char, 2 for int, 3 for float, 4 for double and 0 if none of them.
        void print_type();
        void print_message();
        void set_values();
    private:
        char* value; //stores the input string;
        int int_value; // stores the value of the input converted to int;
        float float_value; // stores the value of the input converted to float;
        double double_value;// stores the value of the input converted to double;
        char char_value;// stores the value of the input converted to char;
        int type; //1 for char, 2 for int, 3 for float, 4 for double and 0 if none of them.
        
        void special_cases();
        void numeric();
        void print_char();
        void print_int();
        void print_float();
        void print_double();
        
    public:
        class InvalidInput: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("The input is not a valid char, int, float or double");
                }
        };
};

#endif