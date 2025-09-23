#include "../include/Zombie.hpp"

void	Zombie::setName(std::string newName)
{
	name = newName;
}

Zombie::Zombie()
{
	std::cout << "A zombie was born\n";
}

Zombie::~Zombie()
{
	std::cout << "The zombie is dead\n";
}
