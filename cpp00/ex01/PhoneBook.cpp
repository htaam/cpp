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

void PhoneBook::add(void){
	std::cout << "You are adding a new contact.\nWhat is the First Name? ";
	list[count].add();
	if (count == 7)
		count = 0;
	else
		count++;
	return ;
}

void PhoneBook::search(void){
	int n = 0;
	int i;
	while (++n < 9)
	{
		i  = n - 1;
		std::cout << n << "|";
		list[i].short_info();
	}
}