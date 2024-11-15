#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(7, "Park");
    delete[] horde;
    return 0;
}