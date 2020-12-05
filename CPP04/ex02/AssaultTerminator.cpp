/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:22:23 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 12:05:58 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &marine)
{
	*this = marine;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator &marine)
{
	(void)marine;
	std::cout << "* teleports from space *" << std::endl;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

void		AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it!" << std::endl;
}

void		AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void		AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attack with chainfists *" << std::endl;
}
