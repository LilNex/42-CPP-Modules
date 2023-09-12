
#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( 42 );
    Fixed const c( 42.4321f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "bool is " << (bool)(b != a) << std::endl;
    std::cout << "b is " << b.getRawBits() << std::endl;
    std::cout << "c is " << c.getRawBits() << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as float" << std::endl;
    std::cout << "b is " << b.toInt() << " as float" << std::endl;
    std::cout << "c is " << c.toInt() << " as float" << std::endl;
    std::cout << "d is " << d.toInt() << " as float" << std::endl;
    
    return 0;
}