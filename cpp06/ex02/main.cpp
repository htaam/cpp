#include <cstring>
#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>


Base *generate(void){
    
    int i = std::rand() % 3;
    switch (i)
    {
        case 0:
            return new A();
            break;
        case 1:
            return new B();
            break;
        case 2:
            return new C();
            break;
    }  
    throw std::exception();
}

void	identify( Base &p ){
    try{
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "type A" << std::endl;
    }
    catch(std::exception &e){
        (void)e;
    }
    try{
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "type B" << std::endl;
    }
    catch(std::exception &e){
    }
    try{
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "type C" << std::endl;
    }
    catch(std::exception &e){
        (void)e;
    }
}

void	identify( Base *p ){
{
	A *a;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "type A" << std::endl;
	B *b;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << "type B" << std::endl;
	C *c;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "type C" << std::endl;
}

}


int main(void)
{
    srand (time (0));
    Base *novo;
    std::cout << std::endl << "Identifying with references" << std::endl << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << std::endl;
        novo = generate();
        identify(*novo);
        delete novo;
    }

    std::cout << std::endl << "Identifying with pointers" << std::endl<< std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << std::endl;
        novo = generate();
        identify(novo);
        delete novo;
    }

}


/*dynamic_cast is exclusively used for handling polymorphism. 
You can cast a pointer or reference to any polymorphic type to any other class type (a polymorphic type has at least one virtual function, declared or inherited).
You can use it for more than just casting downwards – you can cast sideways or even up another chain. 
The dynamic_cast will seek out the desired object and return it if possible. 
If it can't, it will return nullptr in the case of a pointer, or throw std::bad_cast in the case of a reference.*/