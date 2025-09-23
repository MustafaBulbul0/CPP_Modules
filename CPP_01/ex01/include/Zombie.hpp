#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	Zombie
{
	private:
		std::string	name;	
	public:
		void	setName(std::string newName);
	Zombie ();
	~Zombie ();
};

Zombie	*zombieHorde(int N, std::string name);

#endif