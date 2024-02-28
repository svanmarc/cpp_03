/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:52:18 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/28 18:39:22 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap")
{
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << this->name << " is created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " is repaired of " << amount << " points of damage!" << std::endl;
}
