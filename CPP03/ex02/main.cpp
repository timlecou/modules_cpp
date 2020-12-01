/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:16:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:48:49 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap	frag("Tim");
	ScavTrap	scav("Momo");

	frag.vaulthunter_dot_exe("Momo");
	scav.challengeNewcomer();
	frag.takeDamage(30);
	frag.displayStats();
	scav.takeDamage(80);
	scav.displayStats();

	frag.beRepaired(10);
	frag.displayStats();
	scav.beRepaired(1000);
	scav.displayStats();
	return (0);
}
