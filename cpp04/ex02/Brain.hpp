#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>
# include <string>

class Brain{

public:
	Brain( );
    Brain( const Brain &copy);
	virtual ~Brain( void ); 
    Brain & operator=(const Brain &op);
    std::string ideas[100];
    
};

#endif