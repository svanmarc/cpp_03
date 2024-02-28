/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:43:14 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/28 18:43:31 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap frag("Frag");
    ScavTrap scav("Scav");

    frag.attack("Scav");
    scav.attack("Frag");
    frag.highFivesGuys();
    scav.guardGate();
    return 0;
}