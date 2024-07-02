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
  std::cout << "FragTrap " << _name << " constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
  *this = other;
  std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << "FragTrap assignation operator called!" << std::endl;
  if (this != &other) {
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << _name << " high fives guys!" << std::endl;
}