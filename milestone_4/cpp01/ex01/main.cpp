#include "zombie.hpp"

int	main()
{
	Zombie* horde;
	int		num = 5;
	std::string	name = "piero";
	horde = zombieHorde(num, name);
	for (int i = 0; i < num; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}