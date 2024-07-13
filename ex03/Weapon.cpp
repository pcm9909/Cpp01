#include "Weapon.hpp"

Weapon::Weapon(std::string type) :_type(type)
{
    std::cout << "Weapon[" << type << "] created" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon[" << _type << "] destroyed" << std::endl;
}

const std::string& Weapon::getType() const
{
    return _type;
}


void Weapon::setType(std::string type)
{
    _type = type;
}