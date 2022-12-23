#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
typename T::iterator	easyfind( T &container, int n )
{
	typename T::iterator result = find(container.begin(), container.end(), n);

	if (result == container.end())
		return container.end();
	return result;
}



#endif