#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap " << _name << " called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
  *this = other;
  std::cout << "ClapTrap Copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  std::cout << "ClapTrap Copy assignment operator called!" << std::endl;
  if (this != &other) {
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
  }
  return *this;
}

void ClapTrap::attack(const std::string& target) {
  if (_energyPoints > 0 && _hitPoints > 0) {
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
  } else {
    std::cout << "ClapTrap " << _name
              << " has no energy or hit points left to attack." << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  _hitPoints -= amount;
  std::cout << "ClapTrap " << _name << " takes " << amount
            << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_energyPoints > 0 && _hitPoints > 0) {
    _hitPoints += amount;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " is repaired for " << amount
              << " points!" << std::endl;
  } else {
    std::cout << "ClapTrap " << _name
              << " has no energy or hit points left to repair." << std::endl;
  }
}