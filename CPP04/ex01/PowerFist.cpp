/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:54:50 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 10:50:17 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist &power) : AWeapon("Power Fist", 8, 50)
{
	*this = power;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist&	PowerFist::operator=(const PowerFist &power)
{
	setName(power.getName());
	setAPCost(power.getAPCost());
	setDamage(power.getDamage());
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
