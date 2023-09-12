
#include "Zombie.hpp"
/*
void f()
{
    system("leaks brainz");
}
*/

int main()
{
    Zombie zn("test");

    Zombie *zn2 = new Zombie("zn2");

    zn.announce();

    zn2->announce();

    delete zn2;
}