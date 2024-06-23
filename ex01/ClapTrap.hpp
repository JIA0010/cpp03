#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
    protected:
        std::string	_name;
        int			_hitPoints;
        int			_energyPoints;
        int			_attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        virtual ~ClapTrap();//virtualをつけないと、動的に領域を確保した際に、派生クラスのデストラクタが呼び出されない
        ClapTrap &operator=(const ClapTrap &src);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif