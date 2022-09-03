#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

std::string	replace(std::string s1, std::string in, std::string s2)
{
	size_t		i;
	std::string	aux1;
	std::string	aux2;
	std::string aux3;
	std::string aux4;
	std::string	to_return;
	aux1 = in;
	while (!(aux1.find(s1) > aux1.length()))
	{
		i = aux1.find(s1);
		aux2 = aux1.substr(i + s1.length(), aux1.length());
		aux3 = aux1.substr(0, i);
		aux3 = aux3 + s2;
		aux4 = aux4 + aux3;
		aux1 = aux2;
	}
	to_return = aux4 + aux1;
	return (to_return);
}


int	main(int argc, char **argv){
	std::string		line;
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		s1;
	std::string		s2;
	std::string		name;
	int				i = 0;

	if (argc != 4)
	{
		std::cout << "Invalid argument number" << std::endl;
		exit (0);
	}
	name = argv[1];
	name += ".replace";
	s1 = argv[2];
	s2 = argv[3];
	infile.open(argv[1]);
	if (!infile.is_open()) {
		std::cout << "Unable to open file" << std::endl;
	}
	else {
		outfile.open(name.c_str());
		while (getline(infile, line))
		{
			if (i == 0)
				i++;
			else
				outfile << std::endl;
			line = replace(s1, line, s2);
			outfile << line;
		}
	}
}