#include "../include/Zombie.hpp"

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}

Zombie::~Zombie()
{
	std::cout << name <<" is dead.\n";
}
