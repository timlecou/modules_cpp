/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:31:30 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 22:43:46 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	frag("[FR4G]");
	FragTrap	frag2("Tim");
	FragTrap	frag3;

	frag3 = frag;

	frag.rangedAttack("Tim");
	frag2.takeDamage(30);
	frag3.meleeAttack("Tim");
	return (0);
}
