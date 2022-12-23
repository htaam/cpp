#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array{

public:
    
    Array<T>(void):the_size(0), array(NULL){
        the_size = 0;
        std::cout <<" the size is : " << this->size()<<std::endl;
        std::cout << "Empty constructor called" << std::endl;
    }
    
    Array<T>( const unsigned int size): the_size(size){
        std::cout << "Constructor called" << std::endl;
        if (size < 0)
            throw std::overflow_error("Invalid size");
        std::cout <<" the size is : " << this->size()<<std::endl;
        this->array = new T[size];
    }
    
    Array<T>( const Array<T> &og ){
		std::cout<<"Copy constructor" << std::endl;
        if (this == &og)
            return;
        this->the_size = og.size();
        this->array = new T[this->the_size];
        for (int i = 0; i < this->the_size; i++)
         this->array[i] = og[i];
        
	}
    
    virtual ~Array<T>( void ){
		std::cout << "Destructor called" << std::endl;
        std::cout << "Size was :" << this->size()<< std::endl;
		if (this->the_size > 0)
			delete [] this->array;
	}

    Array<T> &operator=(const Array<T> &og){
        std::cout << "Assignment overload called" << std::endl;
        if (this == &og)
            return (*this);
        if (this->size() > 0){
            delete [] this->array;
        }
        this->the_size = og.size();
        this->array = new T[this->the_size];
        for (int i = 0; i < this->the_size; i++)
         this->array[i] = og[i];
        return *this;
    }

    T &operator[](const int index) const{
        if (index >= this->the_size || index < 0)
            throw std::overflow_error("Index out of bounds");
        return this->array[index];
    }

    int size() const{
        return this->the_size;
    }

private:
    int the_size;
    T   *array;


};

template<typename T>
std::ostream &operator<<(std::ostream &ostr, const Array<T> &instance);


#endif