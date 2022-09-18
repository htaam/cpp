#include "Fixed.hpp"
#include <iostream>

int main( void ) {
    {
        Fixed a;
        Fixed b;
        a = Fixed(0);
        b = Fixed(2.5f);

        const Fixed c(5);
        const Fixed d(6);

        std::cout << "a\t=\t" << a << std::endl;
        std::cout << "a++\t=\t" << a++ << std::endl;
        std::cout << "a\t=\t" << a << std::endl;
        std::cout << "++a\t=\t" << ++a << std::endl;
        std::cout << "a\t=\t" << a << std::endl;
        std::cout << "a--\t=\t" <<a-- << std::endl;
        std::cout << "a\t=\t" << a << std::endl;
        std::cout << "--a\t=\t" << --a << std::endl;
        std::cout << "a\t=\t" << a << std::endl;
        std::cout << std::endl;
        a = 10;
        std::cout << "a\t=\t" << a << std::endl;
        std::cout << "b\t=\t" << b << std::endl;
        std::cout << "a + b\t=\t"<< a + b << std::endl;
        std::cout << "a - b\t=\t"<< a - b << std::endl;
        std::cout << "a * b\t=\t"<< a * b << std::endl;
        std::cout << "a / b\t=\t"<<a / b << std::endl;
        std::cout << std::endl;
        b = (Fixed(5.05f) * Fixed(2));
        std::cout << "a\t=\t" << a << std::endl;
        std::cout << "b\t=\t" << b << std::endl;
        std::cout << "c\t=\t" << c << std::endl;
        std::cout << "d\t=\t" << d << std::endl;
        std::cout << "max of a and b \t" << Fixed::max (a, b) << std::endl;
        std::cout << "max of c and d \t" << Fixed::max (c, d) << std:: endl;
        std::cout << "max of a and d \t" << Fixed::max (a, d) << std:: endl;
        std::cout << "mix of a and b \t" << Fixed::min (a, b) << std:: endl << std:: endl;

        std::cout << std::endl;
        b = (10.1f);
        std::cout << "a\t=\t" << a << std::endl;
        std::cout << "b\t=\t" << b << std::endl;
        std::cout << "a < b\t?\t" << (a < b ? "Yes" : "No") << std:: endl;
        std::cout << "a <= b\t?\t" << (a <= b ? "Yes" : "No") << std:: endl;
        std::cout << "a > b\t?\t" << (a > b ? "Yes" : "No") << std:: endl;
        std::cout << "a >= b\t?\t" << (a >= b ? "Yes" : "No") << std:: endl;
        std::cout << "a == b\t?\t" << (a == b ? "Yes" : "No") << std:: endl;
        std::cout << "a != b\t?\t" << (a != b ? "Yes" : "No") << std:: endl;
        b = (10.0f);
        std::cout << "b\t=\t" << b << std::endl;
        std::cout << "a < b\t?\t" << (a < b ? "Yes" : "No") << std:: endl;
        std::cout << "a <= b\t?\t" << (a <= b ? "Yes" : "No") << std:: endl;
        std::cout << "a > b\t?\t" << (a > b ? "Yes" : "No") << std:: endl;
        std::cout << "a >= b\t?\t" << (a >= b ? "Yes" : "No") << std:: endl;
        std::cout << "a == b\t?\t" << (a == b ? "Yes" : "No") << std:: endl;
        std::cout << "a != b\t?\t" << (a != b ? "Yes" : "No") << std:: endl;




    }
    std::cout << std::endl;
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    }
}
