#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cout << "Usage: ./zombieHorde [number of zombies] [name]" << std::endl;
        return 1;
    }
    int n = atoi(argv[1]);
    if (n <= 0)
    {
        std::cout << "Number of zombies must be greater than 0" << std::endl;
        return 1;
    }
    std::string str = argv[2];

    Zombie* horde = zombieHorde(n, str);
    delete[] horde;
    return 0;
}