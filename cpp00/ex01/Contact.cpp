
#include "Contact.hpp"

Contact::Contact(void){
	return ;
}


Contact::~Contact(void){
	return ;
}

void Contact::add(void)
{
	std::cout << "What is the First Name? ";
	std::cin >> FirstName;
	std::cout << "What is the Last Name? ";
	std::cin >> LastName;
	std::cout << "What is the Nickname? ";
	std::cin >> NickName;
	std::cout << "What is the Phone Number? ";
	std::cin >> PhoneNumber;
	std::cout << "What is the Darkest Secret? ";
	std::cin >> DarkestSecret;

}

void Contact::short_info(void){
	if (FirstName.length() > 10)
	{
		std::cout << FirstName.substr(0, 9) << ".";
	} 
	else
	{
	std::cout << 
		std::setw(10) << FirstName;
	}

	std::cout << "|";

	if (LastName.length() > 10)
	{
		std::cout << LastName.substr(0, 9) << ".";
	} 
	else
	{
	std::cout << 
		std::setw(10) << LastName;
	}
	
	std::cout << "|";
	
	if (NickName.length() > 10)
	{
		std::cout << NickName.substr(0, 9) << ".";
	} 
	else
	{
	std::cout << 
		std::setw(10) << NickName;
	}

	std::cout << std::endl;
}

void Contact::long_info(void){
	std::cout << "First name:\t" << FirstName << std::endl;;
	std::cout << "Last name:\t" << LastName << std::endl;;
	std::cout << "Nickname:\t" << NickName << std::endl;
	std::cout << "PhoneNumber:\t" << PhoneNumber << std::endl;;
	std::cout << "Darkest Secret:\t" << DarkestSecret << std::endl;
}

int Contact::is_filled(void){
	if (FirstName.length() < 1)
		return (0);
	return (1);
}