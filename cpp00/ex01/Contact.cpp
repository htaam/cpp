#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contatct constructor call" << std::endl;
	return ;
}


Contact::~Contact(void){
	std::cout << "Contact destructor call" << std::endl;
	return ;
}