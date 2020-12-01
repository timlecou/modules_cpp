/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:16:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 14:43:45 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap	frag("Tim");
	ScavTrap	scav("Momo");
	NinjaTrap	ninja("Thomas");

	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);

	ninja.displayStats();
	frag.meleeAttack("Thomas");
	ninja.takeDamage(30);
	ninja.displayStats();
	ninja.beRepaired(20);
	ninja.displayStats();
	return (0);
}
