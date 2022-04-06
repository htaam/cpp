#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int a1) : count(a1){
	std::cout << "PhoneBook constructor call" << std::endl;
	return ;
}


PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook destructor call" << std::endl;
	return ;
}