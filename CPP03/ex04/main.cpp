/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:08:50 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 17:56:29 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int		main(void)
{
	srand(time(0));
	SuperTrap	super("Tim");
	SuperTrap	super2;
	FragTrap	frag("Momo");

	super.ninjaShoebox(frag);
	super.vaulthunter_dot_exe("Momo");
	super.displayStats();
	super.rangedAttack("Momo");
	super.meleeAttack("Momo");
	super.takeDamage(42);
	super2 = super;
	super2.displayStats();
	return (0);
}
