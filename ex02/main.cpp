/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:43:14 by svanmarc          #+#    #+#             */
/*   Updated: 2024/03/04 10:49:14 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap frag("Frag");
    ScavTrap scav("Scav");
    /*
    std::cout << " Frag hitPoints: " << frag.getHitPoints() << std::endl;
    std::cout << " Frag energyPoints: " << frag.getEnergyPoints() << std::endl;
    std::cout << " Frag attackDamage: " << frag.getAttackDamage() << std::endl;
    std::cout << " Scav hitPoints: " << scav.getHitPoints() << std::endl;
    std::cout << " Scav energyPoints: " << scav.getEnergyPoints() << std::endl;
    std::cout << " Scav attackDamage: " << scav.getAttackDamage() << std::endl;*/
    frag.attack("Scav");
    scav.attack("Frag");
    frag.highFivesGuys();
    scav.guardGate();
    return 0;
}