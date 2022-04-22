#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main(){
	PhoneBook phonebook (0);
	std::string command;
	
	int run = 1;
	std::cout << "Welcome. Please input a command [ADD, SEARCH, EXIT]:";
	while (run)
	{
		std::cin >> command;
		if (command  == "ADD")
		{
			phonebook.add();
		}
		else if (command  == "SEARCH")
		{
			phonebook.search();
		}
		else if (command  == "EXIT")
		{
			run = 0;
			std::cout << "Thank you. Have a nice day!" << std::endl;
		}
		else 
		{
			std::cout << "Invalid Input. ";
		}
		if (run)
			std::cout << "Please input a new command [ADD, SEARCH, EXIT]:";
	}
}