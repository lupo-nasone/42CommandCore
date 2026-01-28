#include "zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << name << " is created" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed" << std::endl;
}
