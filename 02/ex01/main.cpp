
#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( 124 );
    Fixed const c( 42.4321f );
    Fixed const d( b );

    // a = Fixed( 1234.4321f );
    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b << " as integer" << std::endl;
    // std::cout << "c is " << c << " as integer" << std::endl;
    // std::cout << "d is " << d << " as integer" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    std::cout << "d is " << d.toFloat() << " as float" << std::endl;
    
    return 0;
}