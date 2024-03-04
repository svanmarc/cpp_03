/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:43:14 by svanmarc          #+#    #+#             */
/*   Updated: 2024/03/04 10:38:05 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diam("Diams");
    std::cout << std::endl;
    //std::cout << " DiamondTrap hitPoints: " << diam.getHitPoints() << std::endl;
    //std::cout << " DiamondTrap energyPoints: " << diam.getEnergyPoints() << std::endl;
    //std::cout << " DiamondTrap attackDamage: " << diam.getAttackDamage() << std::endl;
    diam.attack("Boulette");
    diam.takeDamage(30);
    diam.beRepaired(10);
    std::cout << std::endl;
    diam.whoAmI();
    std::cout << std::endl;
    diam.highFivesGuys();
    diam.guardGate();
    return 0;
}