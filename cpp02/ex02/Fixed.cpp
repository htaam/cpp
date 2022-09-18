#include "Fixed.hpp"

Fixed::Fixed(){
    //std::cout << "Default constructer called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int integer){
    //std::cout << "Int constructer called" << std::endl;
    this->value = integer << this->frac;
}
Fixed::Fixed(const float fl){
    //std::cout << "Float constructer called" << std::endl;
    this->value = (int)(roundf(fl * (1 << this->frac)));
}

Fixed::Fixed(const Fixed &copy){
    //std::cout << "Copy constructer called" << std::endl;
    this->value = copy.getRawBits();
}

Fixed::~Fixed(){
    //std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& op)
{
    //std::cout << "Assignment operator overloader called" << std::endl;
    if (this == &op)
        return (*this);
    this->value = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const{
    //std::cout << "getRawBits called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw){
    //std::cout << "setRawBits called" << std::endl;
    this->value = raw;
}

int Fixed::toInt(void) const
{
    return ((int)(this->value >> this->frac));
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->frac));
}



std::ostream &operator<<(std::ostream &out, const Fixed &fx)
{
    out << fx.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed &op){
    return (this->value > op.getRawBits());
    }

bool Fixed::operator<(const Fixed &op){
    return (this->value < op.getRawBits());
}

bool Fixed::operator>=(const Fixed &op){
    return (this->value >= op.getRawBits());
}

bool Fixed::operator<=(const Fixed &op){
    return (this->value <= op.getRawBits());    
}

bool Fixed::operator==(const Fixed &op){
        return (this->getRawBits() == op.getRawBits());
}

bool Fixed::operator!=(const Fixed &op){
    return (!(this->getRawBits() == op.getRawBits()));
}




Fixed Fixed::operator+(const Fixed & op) const{
    Fixed to;
    to.setRawBits(this->value + op.getRawBits());
    return(to);
}

Fixed Fixed::operator-(const Fixed &op) const{
    Fixed to_return;
    to_return.setRawBits(this->value - op.getRawBits());
    return(to_return);
}

Fixed Fixed::operator*(const Fixed &op) const{  
    Fixed to_return;
    to_return.setRawBits((this->value * op.getRawBits()) >> this->frac);
    return(to_return);
}

Fixed  Fixed::operator/(const Fixed &op) const{
    Fixed to_return;
    to_return.setRawBits((this->value << this->frac) / op.getRawBits());
    return(to_return);
}




Fixed & Fixed::operator++(void){
    this->value++;
    return (*this);
} //pre

Fixed Fixed::operator++(int){
    Fixed to(*this);
    operator++();
    return(to);
} //post
Fixed & Fixed::operator--(void){
    this->value--;
    return (*this);
} //pre

Fixed Fixed::operator--(int){
    Fixed to(*this);
    operator--();
    return(to);
} //post





Fixed & Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b){
    return (a > b ? a : b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b){
    return ((Fixed)a < (Fixed)b ? a : b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b){
    return ((Fixed)a > (Fixed)b ? a : b);
}


/*Fixed &min(Fixed &a, Fixed &b){
    return (a < b ? a : b);
}
Fixed &max(Fixed &a, Fixed &b){
    
    return (a > b ? a : b);
}*/