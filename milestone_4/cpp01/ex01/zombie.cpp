#include "zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "Destroying zombie " << name << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}