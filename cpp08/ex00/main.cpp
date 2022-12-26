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
	{
		std::list<int> list;
		list.push_back(8);
		list.push_back(-895);
		list.push_back(785);
		list.push_back(156);
		std::list<int>::iterator it_find_list = easyfind(list, -895);
		std::cout << "Search -895 : " << *it_find_list << std::endl; 
		std::cout << "Previous of -895 in array is : " << *(--it_find_list) << std::endl;
	}
    {
		std::vector<int> vec;
		vec.push_back(2);
		vec.push_back(-5);
		vec.push_back(99);
		vec.push_back(0);

		std::vector<int>::iterator it_find_vec = easyfind(vec, 0);
    	std::cout << "Search 0 : " << *it_find_vec << std::endl;
    	std::cout << "Previous of 0 in array is : " << *(it_find_vec - 1) << std::endl;
		
	}
}
