#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed{

public:
	Fixed(  void );
    Fixed(const int integer);
    Fixed(const float fl);
    Fixed( const Fixed &copy);
	~Fixed( void ); 
    Fixed & operator=(const Fixed &op);

    bool operator>(const Fixed &op);
    bool  operator<(const Fixed &op);
    bool  operator>=(const Fixed &op);
    bool  operator<=(const Fixed &op);
    bool  operator==(const Fixed &op);
    bool  operator!=(const Fixed &op);

    Fixed operator+(const Fixed& op) const;
    Fixed operator-(const Fixed &op) const;
    Fixed operator*(const Fixed &op) const;
    Fixed operator/(const Fixed &op) const;

    Fixed &operator++(void); //pre
    Fixed operator++(int); //post
    Fixed &operator--(void); //pre
    Fixed operator--(int); //post

    int getRawBits( void ) const;
    void setRawBits( int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    const static Fixed &min(const Fixed &a, const Fixed &b);
    const static Fixed &max(const Fixed &a, const Fixed &b);
private:
    int value;
    static const int frac = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fx);
//Fixed &min(Fixed &a, Fixed &b);
//Fixed &max(Fixed &a, Fixed &b);

#endif