#include "../include/Zombie.hpp"

int main()
{
	Zombie *nZombie;

	randomChump("Foo");
	nZombie = newZombie("ck");
	if (!nZombie)
	{
		std::cout << "Allocation error\n";
		return (1);
	}
	nZombie->announce();
	delete (nZombie);
	return (0);
}
