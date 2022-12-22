#include <iostream>
#include "whatever.hpp"

int main(){
    int a,b;
    float c,d;
    char e,f;
    std::string g,h;

    a = 1;
    b = 2;
    c = 3.1f;
    d = 4.2f;
    e = 'e';
    f = 'f';
    g = "string_g";
    h = "string_h";

	std::cout << "a: " << a << " and b: " << b << std::endl;
	std::cout << "c: " << c << " and d: " << d << std::endl;
	std::cout << "e: " << e << " and f: " << f << std::endl;
	std::cout << "g: " << g << " and h: " << h << std::endl;
    std::cout << std::endl <<"Now calling swap on all these..." << std::endl;
    swap(a,b);
    swap(c,d);
    swap(e,f);
    swap(g,h);
    std::cout << std::endl;
    std::cout << "a: " << a << " and b: " << b << std::endl;
	std::cout << "c: " << c << " and d: " << d << std::endl;
	std::cout << "e: " << e << " and f: " << f << std::endl;
	std::cout << "g: " << g << " and h: " << h << std::endl;
    std::cout << std::endl << "Now swaping them back ..." << std::endl;
    swap(a,b);
    swap(c,d);
    swap(e,f);
    swap(g,h);
    std::cout << std::endl;
    std::cout << "a: " << a << " and b: " << b << std::endl;
	std::cout << "c: " << c << " and d: " << d << std::endl;
	std::cout << "e: " << e << " and f: " << f << std::endl;
	std::cout << "g: " << g << " and h: " << h << std::endl;
    std::cout << std::endl;

	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "max(a, b): " << ::max(a, b) << std::endl;
	std::cout << "min(c, d): " << ::min(c, d) << std::endl;
	std::cout << "max(c, d): " << ::max(c, d) << std::endl;
	std::cout << "min(e, f): " << ::min(e, f) << std::endl;
	std::cout << "max(e, f): " << ::max(e, f) << std::endl;
	std::cout << "min(g, h): " << ::min(g, h) << std::endl;
	std::cout << "max(g, h): " << ::max(g, h) << std::endl;

    std::cout << std::endl <<"NOW THE REQUIRED CODE" << std::endl << std::endl;

    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl; 
    }
}