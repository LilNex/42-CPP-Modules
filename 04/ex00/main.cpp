

#include "main.hpp"

int main()
{
    // Animal* meta = new Animal();
    // Animal* j = new Dog();
    Animal* i = new Dog();
    Animal* a = new Animal();
    Animal* cat = new Cat();

    Animal *c = (Animal *)i;
    Animal *cPtr = (Animal *)cat;

    std::cout << i->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << cPtr->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    c->makeSound(); //will output the cat sound!
    cPtr->makeSound(); //will output the cat sound!
    a->makeSound(); //will output the cat sound!
}