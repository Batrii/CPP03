#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("badr");

    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    return 0;
}