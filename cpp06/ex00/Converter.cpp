#include "Converter.hpp"
#include "utils.hpp"


Converter::Converter(){ //standart constructor. never used.
    std::cout << "Constructor called" << std::endl;
}
Converter::Converter(char* const &value):value(value),type(5){
    std::cout << "Constructor called. str value is " << value << std::endl;
} //constructor that takes a string. the one actualy used.

Converter::Converter(const Converter &og):value(og.value){
    std::cout << "copy constructor called. str value is "<< value << std::endl;
    this->char_value = og.char_value;
    this->int_value = og.int_value;
    this->double_value = og.double_value;
    this->float_value = og.float_value;
} //copy constructor
Converter  & Converter::operator=(Converter const &og){
    this->char_value = og.char_value;
    this->int_value = og.int_value;
    this->double_value = og.double_value;
    this->float_value = og.float_value;
    return *this;
} //copy assignment constructor

Converter::~Converter(){
    std::cout << "Destructor called" << std::endl;;
    } //destructor

void  Converter::is_type(){// 1 for char, 2 for int, 3 for float, 4 for double and 0 if none of them.
    std::string input;

    input = value;
    this->special_cases();
    if (this->type != 5)
        return;
    if ((input[0] >= '0' && input[0] <= '9') || input[0] == '-' || input[0] == '.' || input[0] == '+'){
        this->numeric();
    }
    if (this->type == 5){
        if (input[1])
        {
            this->type = 0;
            return;
        }
    this->type = 1;
    }
    return;
}

void Converter::numeric(){
    int i = 0;
    int dot = 0;

    std::string input;

    input = value;

    if (input[0] == '-' && input[1])
		i++;
	if (input[i] == '.' && (input[i + 1] == 'f' || input[i + 1] == 0))
	{
        this->type = 5;
        return;
    }
	while (input[i] == '.' || isdigit(input[i]))
	{
		if (input[i] == '.')
			dot++;
		if (dot > 1)
		{
            this->type = 5;
            return;
        }
		i++;
	}
	if (!input[i])
	{
		if (dot == 1)
        {
			this->type = 4;
            return;
        }
		this->type = 2;
        return;;
	}
	else if (input[i] == 'f' && !input[i + 1] && dot == 1)
	{
    	this->type = 3;
        return;
    }
	this->type = 5;
    return;

}

void Converter::special_cases(){
    const std::string	special_doubles[] =
	{
		"inf", "+inf", "-inf", "nan"
	};
	const std::string	special_floats[] =
	{
		"inff", "+inff", "-inff", "nanf"
	};

    for (int i = 0; i < 4; i++)
	{
		if (special_doubles[i] == this->value)
			this->type = 4;
		else if (special_floats[i] == this->value)
			this->type = 3;
	}
}

void Converter::set_values()
{
    switch(this->type)
    {
        case 1:
            this->char_value = this->value[0];
            break;
        case 2:
            this->int_value = atoi(this->value);
            break;
        case 3:
            this->float_value = atof(this->value);
            break;
        case 4:
            this->double_value = atof(this->value);
            break;
        default:
            std::cout << "The input is not a valid char, int, float or double" << std::endl;
            break;
    }
}

void Converter::print_type(){
    std::cout << this->type <<std::endl;
}

void Converter::print_int(){
    switch(this->type)
    {
        case 1:
            std::cout << "int: " << static_cast<int>(this->char_value) << std::endl;
            break;
        case 2:
            std::cout << "int: " << this->int_value << std::endl;
            break;
        case 3:
            if (canConvertToInt(this->float_value)){
                std::cout << "int: " << static_cast<int>(this->float_value) << std::endl;
            }
            else {
                std::cout << "int: impossible" << std::endl;}
            break;
        case 4:
            if (canConvertToInt(this->double_value)){
                std::cout << "int: " << static_cast<int>(this->double_value) << std::endl;
            }
            else {
                std::cout << "int: impossible" << std::endl;}
            break;
        default:
            break;
    }
}

void Converter::print_float(){
    switch (this->type)
    {
    case 1:
        std::cout << "float: " << static_cast<float>(this->char_value) << ".0f"<< std::endl;
        break;
    case 2:
        std::cout << "float: " << static_cast<float>(this->int_value) << ".0f" << std::endl;
        break;
    case 3:
        if(this->float_value - static_cast<int>(this->float_value))
    default:
        break;
    }
}

void Converter::print_message(){
    this->print_int();
}




