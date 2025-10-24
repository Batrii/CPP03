#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav;
    scav.attack("enemy");
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.guardGate();
    return 0;
}