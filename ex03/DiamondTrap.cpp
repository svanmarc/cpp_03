/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:09:05 by svanmarc          #+#    #+#             */
/*   Updated: 2024/03/04 10:31:38 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "Default construct of DiamondTrap is created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    this->name = name;
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    std::cout << "DiamondTrap " << name << " is created" << std::endl;    
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
    *this = src;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << name << " is destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        ScavTrap::operator=(rhs);
        FragTrap::operator=(rhs);
    }
    return *this;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}



