#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		HumanA(std::string newName, Weapon& newWeapon);
		void attack();
};

#endif