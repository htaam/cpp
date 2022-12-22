#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP
template<typename T>
void	display( T &whatever )
{
	std::cout << "Variable's value is: " << whatever << std::endl;
}

template<typename T>
void    display_divided_by_2(T &whatever)
{
    std::cout << "Variable divided by 2 is: " << whatever / 2 <<std::endl;
}

template<typename T>
void change_to_1(T &whatever)
{
    whatever = 1;
}
#endif
