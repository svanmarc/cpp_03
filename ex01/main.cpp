/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:22:05 by svanmarc          #+#    #+#             */
/*   Updated: 2024/03/04 10:50:56 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("target");
    scavTrap.guardGate();
    /*
    std::cout << "hitPoints: " << scavTrap.getHitPoints() << std::endl;
    std::cout << "energyPoints: " << scavTrap.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << scavTrap.getAttackDamage() << std::endl;*/
    
    return 0;
}