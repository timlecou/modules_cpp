/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:31:30 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 11:36:38 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap	frag("Tim");
	FragTrap	frag2("{Bad robot}");;

	frag2 = frag;

	frag.rangedAttack("{Bad robot}");
	frag2.takeDamage(30);
	frag.meleeAttack("{Bad robot}");
	frag2.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	if (frag2.vaulthunter_dot_exe("Tim"))
		frag.takeDamage(30);
	return (0);
}
