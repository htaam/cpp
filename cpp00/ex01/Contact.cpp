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

void Contact::add(void)
{
	std::cin >> FirstName;
	std::cout << "What is the Last Name? ";
	std::cin >> LastName;
	std::cout << "What is the Nickname? ";
	std::cin >> NickName;
	std::cout << "What is the Phone Number? ";
	std::cin >> PhoneNumber;
	std::cout << "What is the Darkest Secret? ";
	std::cin >> DarkestSecret;

	std::cout << "\nFirst name: " << FirstName;
	std::cout << "\nLast name: " << LastName;
	std::cout << "\nNickname:" << NickName;
	std::cout << "\nPhoneNumber: " << PhoneNumber;
	std::cout << "\nDarkest Secret: " << DarkestSecret;
}

void Contact::short_info(void){
	std::cout<< FirstName << "|" << LastName << "|" << NickName << "\n";
}