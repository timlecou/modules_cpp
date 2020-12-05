/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:35:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 17:54:59 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(const Ice &ice): AMateria("ice")
{
	*this = ice;
}

Ice::~Ice(void) {}

Ice&	Ice::operator=(const Ice &ice)
{
	AMateria::operator=(ice);
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return (new Ice());
}

void		Ice::use(ICharacter &target)
{
	setXP(getXP() + 10);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
