#include "../include/Weapon.hpp"

const std::string& Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string newValue)
{
	type = newValue;
}

Weapon::Weapon(std::string newType) : type(newType){}
