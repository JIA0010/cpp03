#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrap");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3 = claptrap;

    claptrap.attack("enemy");
    claptrap.takeDamage(11);
    claptrap.beRepaired(3);
    return 0;
}