
#include "main.hpp"


int main()
{
    Harl harl;
    std::string line;
    do
    {
        std::cout << "Enter log level : ";
        std::getline(std::cin, line);
        harl.complain(line);
    }
    while (std::cin.good());
    return (0);
}
