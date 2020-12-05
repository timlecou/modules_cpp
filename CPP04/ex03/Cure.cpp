/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:35:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 17:56:25 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(const Cure &cure): AMateria("cure") 
{
	*this = cure;
}

Cure::~Cure(void) {}

Cure&	Cure::operator=(const Cure &cure)
{
	AMateria::operator=(cure);
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure());
}

void		Cure::use(ICharacter &target)
{
	setXP(getXP() + 10);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
