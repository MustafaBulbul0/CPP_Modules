#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;
	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return (1);
	}

	harl.complain(av[1]);
	return (0);
}
