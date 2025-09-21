#include "../include/Zombie.hpp"

int main()
{
	Zombie *nZombie;

	randomChump("Foo");
	nZombie = newZombie("ck");
	nZombie->announce();
	delete (nZombie);
	return (0);
}
