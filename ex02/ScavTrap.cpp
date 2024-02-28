/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:13:42 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/28 18:31:43 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavDefault")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " is created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;    
    std::cout << "ScavTrap " << this->name << " is created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    *this = src;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << name << " is destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->name << " attack " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode" << std::endl;
}