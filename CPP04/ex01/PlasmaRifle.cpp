/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:54:50 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 10:48:47 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle &plasma) : AWeapon ("Plasma Rifle", 5, 21)
{
	*this = plasma;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle &plasma)
{
	setName(plasma.getName());
	setAPCost(plasma.getAPCost());
	setDamage(plasma.getDamage());
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
