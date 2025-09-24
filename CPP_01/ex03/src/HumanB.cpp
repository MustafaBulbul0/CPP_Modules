#include "../include/HumanB.hpp"


HumanB::HumanB(std::string newName)
{
	name = newName;
	weapon = NULL;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

void	HumanB::attack()
{
	if (weapon == NULL)
    {
        std::cout << name << " cannot attack" << "\n";
        return;
    }
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

