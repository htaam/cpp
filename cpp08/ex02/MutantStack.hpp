#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <algorithm>
# include <iostream>

template< typename T > 
class MutantStack;

template< typename T>
class MutantStack: public std::stack<T>
{
    public:
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


    MutantStack()   {
        std::cout << "Constructor"<< std::endl;
    };
    MutantStack(const MutantStack& og)  {
        std::cout<< "copy" << std::endl;
    };
    virtual ~MutantStack() {
         std::cout<< "Destructor" << std::endl;
    };
    MutantStack &operator=(const MutantStack &op)
    {
        std::cout<< "Assigment" << std::endl;
        if (this == &op)
            return (*this);
        std::stack<T>::operator=(op);
        return (*this);
    };
    
    iterator begin() { 
        return (std::stack<T>::c.begin());
    }

    const_iterator begin() const { 
        return (std::stack<T>::c.begin());
    }

    iterator end() {
        return (std::stack<T>::c.end());
    }

    const_iterator end() const {
        return (std::stack<T>::c.end());
    }

    reverse_iterator rbegin() {
        return (std::stack<T>::c.rbegin());
    }

    const_reverse_iterator rbegin() const {
        return (std::stack<T>::c.rbegin());
    }

    reverse_iterator rend() {
        return (std::stack<T>::c.rend());
    }

    const_reverse_iterator rend() const {
        return (std::stack<T>::c.rend());
    } 
};

#endif