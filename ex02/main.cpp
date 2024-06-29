#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
  // ClapTrap claptrap("Claptrap");
  // ClapTrap claptrap2(claptrap);
  // ClapTrap claptrap3 = claptrap;

  // claptrap.attack("enemy");
  // claptrap.takeDamage(11);
  // claptrap.beRepaired(3);

//   ScavTrap scavtrap("Scavtrap");
//   scavtrap.attack("enemy");
//   scavtrap.takeDamage(11);
//   scavtrap.beRepaired(3);
//   scavtrap.guardGate();

    FragTrap fragtrap("Fragtrap");
    fragtrap.attack("enemy");
    fragtrap.takeDamage(11);
    fragtrap.beRepaired(3);
    fragtrap.highFivesGuys();
    
  return 0;
}
