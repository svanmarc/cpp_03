/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:52:18 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/28 18:07:55 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    if (this != &src)
    {
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attack " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " is repaired of " << amount << " points of damage!" << std::endl;
}

