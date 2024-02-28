/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:36:01 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/28 18:50:29 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " is created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;    
    std::cout << "FragTrap " << this->name << " is created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
    *this = src;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << name << " is destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " give me a hight fives guys!!!!" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this->name << " attack " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}