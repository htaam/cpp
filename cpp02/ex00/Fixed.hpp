#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed{

public:
	Fixed(  void );
    Fixed( const Fixed &copy);
	~Fixed( void ); 
    Fixed & operator=(const Fixed &op);

    int getRawBits( void ) const;
    void setRawBits( int const raw);
private:
    int value;
    static const int frac = 8;
};

#endif