#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Fragtrap") {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap name constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
    *this = other;
    std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "FragTrap assignation operator called!" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor is destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " high fives guys!" << std::endl;
}