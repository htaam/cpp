#include <iostream>
#include <cstdlib>
#include "iter.hpp"
#include "templates.hpp"

int main(){
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        a[i] = (std::rand() % 100);
    } 
    
    iter(a,5,display);   
    iter(a,5,display_divided_by_2);
    iter(a,5,display);
    iter(a,5,change_to_1);
    iter(a,5,display);

    std::string str[3];
    str[0] = "Hello";
    str[1] = "Ola";
    str[2] = "Goodbye";

    iter(str, 3, display);
    iter(str,3,change_to_1);
    iter(str, 3, display);
    
}