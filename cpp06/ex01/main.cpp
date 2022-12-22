#include <cstring>
#include <iostream>
#include <stdint.h>
#include "data.hpp"

uintptr_t serialize(Data* ptr){
    std::cout << "Serializing..." << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data* deserialize(uintptr_t raw){
    std::cout << "Deserializing..." << std::endl;
    return (reinterpret_cast<Data *>(raw));
}



int main(void)
{
    Data *ptr = new Data;
    Data *new_ptr;
    uintptr_t raw;

    ptr->str = "hi";
    std::cout << ptr->str << std::endl;
    ptr->number = 1;
    std::cout << ptr->number << std::endl;
    ptr->bol = true;
    std::cout << ptr->bol << std::endl;
    
    std::cout << ptr << std::endl;
    raw = serialize(ptr);
    
    std::cout << raw << std::endl;
    
    new_ptr = deserialize(raw);
    
    
    std::cout << new_ptr->str << std::endl;
    std::cout << new_ptr->number << std::endl;
    std::cout << new_ptr->bol << std::endl;
    std::cout << new_ptr << std::endl;
}


/* reinterpret_cast is the most dangerous cast, and should be used very sparingly.
It turns one type directly into another — such as casting the value from one pointer to another, or storing a pointer in an int, or all sorts of other nasty things.
Largely, the only guarantee you get with reinterpret_cast is that normally if you cast the result back to the original type, you will get the exact same value (but not if the intermediate type is smaller than the original type).*/