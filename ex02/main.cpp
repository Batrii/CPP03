#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Fraggy");
    frag.attack("enemy");
    frag.takeDamage(5);
    frag.beRepaired(3);
    frag.highFivesGuys();
    return 0;
}