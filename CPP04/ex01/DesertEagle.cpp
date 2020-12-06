/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DesertEagle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:54:50 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 14:34:16 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DesertEagle.hpp"

DesertEagle::DesertEagle(void) : AWeapon("Desert Eagle", 1, 50)
{}

DesertEagle::DesertEagle(DesertEagle &desert) : AWeapon ("Desert Eagle", 1, 50)
{
	*this = desert;
}

DesertEagle::~DesertEagle(void)
{
	return ;
}

DesertEagle&	DesertEagle::operator=(const DesertEagle &desert)
{
	setName(desert.getName());
	setAPCost(desert.getAPCost());
	setDamage(desert.getDamage());
	return (*this);
}

void	DesertEagle::attack(void) const
{
	std::cout << "* PRRRRROUUUUUUU!! *" << std::endl;
}
