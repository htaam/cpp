#include <iostream>
#include <cstring>

using namespace std;

int	main (int argc, char **argv)
{
	char	temp;

	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			for (size_t j = 0; j < strlen(argv[i]); ++j)
			{
				temp = toupper(argv[i][j]);
				cout << temp;
			}
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return (0);
}