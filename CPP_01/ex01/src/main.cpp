#include "../include/Zombie.hpp"

int	main()
{
	const int	N = 5;
	std::string	name;
	Zombie		*Zooombieee;

	name = "Brain";
	Zooombieee = zombieHorde(N, name);
	delete[] Zooombieee;
	return (0);
}
