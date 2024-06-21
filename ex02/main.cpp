#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << "---------" << std::endl;
}

int main() {
  put_line();
  // (constructor)ClapTrap FT_1 has been created!
  // (constructor)FragTrap FT_1 has been created!
  FragTrap s1("FT_1");

  put_line();
  // ClapTrap FT_1 attacks target1, causing 30 points of damage!
  s1.attack("target1");

  put_line();
  // ClapTrap FT_1 takes 5 points of damage!
  s1.takeDamage(5);

  put_line();
  // ClapTrap FT_1 is repaired for 3 points!
  s1.beRepaired(3);

  put_line();
  // FragTrap FT_1 requests a high five!
  s1.highFivesGuys();

  put_line();
  // (constructor)ClapTrap Copy constructor called
  // ClapTrap Copy assignment operator called
  // (constructor)FragTrap Copy constructor called
  // FragTrap Copy assignment operator called
  // ClapTrap Copy assignment operator called
  FragTrap s1_copy(s1);

  put_line();
  // FragTrap FT_1 requests a high five!
  s1_copy.highFivesGuys();

  put_line();
  // (constructor)ClapTrap Default constructor called
  // (constructor)FragTrap Default constructor called
  FragTrap s1_assigned;

  put_line();
  // FragTrap Copy assignment operator called
  // ClapTrap Copy assignment operator called
  s1_assigned = s1;

  put_line();
  // FragTrap FT_1 requests a high five!
  s1_assigned.highFivesGuys();

  put_line();
  // (destructor)FragTrap FT_1 has been destroyed!
  // (destructor)ClapTrap FT_1 has been destroyed!
  // (destructor)FragTrap FT_1 has been destroyed!
  // (destructor)ClapTrap FT_1 has been destroyed!
  // (destructor)FragTrap FT_1 has been destroyed!
  // (destructor)ClapTrap FT_1 has been destroyed!
  return 0;
}