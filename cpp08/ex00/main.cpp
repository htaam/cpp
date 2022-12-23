#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

template<typename T>
void	displayIterator( T it, T end )
{
	if (it != end)
		std::cout << "iterator: " << *it << std::endl;
	else
		std::cout << "iterator reached the end of container" << std::endl;
}


int	main( void )
{
	std::vector<int>			vect;
	std::vector<int>::iterator       	it;

	for (int i = 1; i < 59; i += 2)
		vect.push_back(i);
    it = easyfind(vect, 43);
    displayIterator(it, vect.end());
	std::cout << it[0] << std::endl;
	it = easyfind(vect, 42);
    displayIterator(it, vect.end());
	std::cout << it[0] << std::endl;

    std::list<int>  list;
    std::list<int>::iterator list_it;
    for (int i = 1; i < 59; i += 2)
        list.push_back(i);
    list_it = easyfind(list, 43);
    displayIterator(list_it, list.end());
	list_it = easyfind(list, 42);
    displayIterator(list_it, list.end());

    
}
