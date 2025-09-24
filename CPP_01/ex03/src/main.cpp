#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob = HumanA("Bob", club);
	HumanB jim = HumanB("Jim");

	bob.attack();
	jim.attack();

	club.setType("knife");
	jim.setWeapon(club);

	bob.attack();
	jim.attack();

	return (0);
}
