#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructer called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &copy){
    std::cout << "Copy constructer called" << std::endl;
    this->value = copy.getRawBits();
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& op)
{
    std::cout << "Assignment operator overloader called" << std::endl;
    if (this == &op)
        return (*this);
    this->value = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits called" << std::endl;
    this->value = raw;
}