/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:31:30 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:56:53 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	fragtrap(void)
{
	std::cout << "---------------------FR4G-TP---------------------" << std::endl;
	FragTrap	frag("Tim");
	FragTrap	frag2("{Frag robot}");;

	frag2 = frag;

	frag.displayStats();
	frag.rangedAttack("{Frag robot}");
	frag2.takeDamage(30);
	frag.meleeAttack("{Frag robot}");
	frag2.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	frag.displayStats();
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	frag.beRepaired(50);
}

void	scavtrap(void)
{
	std::cout << "---------------------SC4V-TP---------------------" << std::endl;
	ScavTrap	scav("Tim");
	ScavTrap	scav2("{Scav robot}");;

	scav2 = scav;

	scav2.displayStats();
	scav.rangedAttack("{Scav robot}");
	scav2.takeDamage(15);
	scav.meleeAttack("{Scav robot}");
	scav2.takeDamage(20);
	scav2.displayStats();
	scav2.challengeNewcomer();
	scav2.challengeNewcomer();
	scav.beRepaired(50);
}

int		main(void)
{
	srand(time(0));
	fragtrap();
	scavtrap();
	return (0);
}
