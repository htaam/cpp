#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int a1) : count(a1){
	return ;
}


PhoneBook::~PhoneBook(void){
	return ;
}

void PhoneBook::add(void){
	std::cout << "You are adding a new contact." << std::endl;
	list[count].add();
	std::cout << "New contact aded with index :" << (count + 1) << std::endl;
	std::cout << "And the folowing info" << std::endl;
	list[count].long_info();
	if (count == 7)
		count = 0;
	else
		count++;
	return ;
}

void PhoneBook::search(void){
	int a;
	int n = 0;
	int i;
	if (!list[0].is_filled())
		std::cout << "Please add one contact before searching" << std::endl;
	else
	{
		std::cout << std::setw(10) << "INDEX" << "|" <<
					std::setw(10) << "First Name" << "|" <<
					std::setw(10) << "Last Name" << "|" <<
					std::setw(10) << "Nickname" << "\n";
		while (++n < 9)
		{
			i  = n - 1;
			if (list[i].is_filled())
			{
				std::cout << std::setw(10) << n << "|";
				list[i].short_info();
			}
		}
		std::cout << "Please select a index :";
		std::cin >> a;
		while (a < 1 || a > 8)
		{
			std::cout << "\nInvalid Index, Please select a valid one :";
			std::cin >> a;
			if (a > 0 && a < 9)
			{
				if (list[a - 1].is_filled() == 1)
					break;
				else
					a = 10;
			}
		}

		list[a - 1].long_info();
	}
}