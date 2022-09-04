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

    int getRawBits( void ) const;
    void setRawBits( int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int value;
    static const int frac = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fx);

#endif