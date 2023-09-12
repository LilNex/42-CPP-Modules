
#include "Zombie.hpp"


// void f()
// {
//     system("leaks morebrainz");
// }



int main()
{
    // atexit(f);
    Zombie *zn2 = zombieHorde(5, "znnnnn");

    for (int i = 0; i < 5; i++)
        zn2[i].announce();
    delete[] zn2;
}