/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:59:45 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/28 17:59:57 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("ClapTrap");

    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);
    return 0;
}