#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
  *this = other;
  std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  _name = other._name;
  _hitPoints = other._hitPoints;
  _energyPoints = other._energyPoints;
  _attackDamage = other._attackDamage;
  return *this;
}

void ScavTrap::attack(const std::string& target) {
  if (_energyPoints > 0 && _hitPoints > 0) {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
  } else {
    std::cout << "ScavTrap " << _name
              << " has no energy or hit points left to attack." << std::endl;
  }
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode."
            << std::endl;
}