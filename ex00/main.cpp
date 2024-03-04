/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:59:45 by svanmarc          #+#    #+#             */
/*   Updated: 2024/03/04 10:46:57 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("ClapTrap");

    clapTrap.attack("target");
    // std::cout << "hitPoints: " << clapTrap.getHitPoints() << std::endl;
    // std::cout << "energyPoints: " << clapTrap.getEnergyPoints() << std::endl;
    // std::cout << "attackDamage: " << clapTrap.getAttackDamage() << std::endl;
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);
    return 0;
}