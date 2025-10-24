#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
};

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "ScavTrap " << this->name << " copy constructed." << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << this->name << " assigned." << std::endl;
    return *this;
}
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " destructed." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}