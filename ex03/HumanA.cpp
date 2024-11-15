#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA::" << name << " created(" << weapon.getType() << ")" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA::" << _name << " destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

