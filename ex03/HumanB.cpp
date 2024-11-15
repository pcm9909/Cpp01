#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB::" << name << " created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB::" << _name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    std::cout << "HumanB::" << _name << " has a weapon(" << weapon.getType() << ")" << std::endl;
    _weapon = &weapon;
}

void HumanB::attack()
{
	if(HumanB::_weapon)
	{
    	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	}
}