#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie is born" << std::endl;
}
Zombie::~Zombie(void)
{
    std::cout << "Zombie is dead" << std::endl;
}

void Zombie::SetName(std::string name)
{
    _name = name;
}

void Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}