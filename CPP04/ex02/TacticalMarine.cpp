/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:22:23 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 12:55:21 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &marine)
{
	*this = marine;
	std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine &marine)
{
	(void)marine;
	std::cout << "Tactical Marine ready for action!" << std::endl;
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone(void) const
{
	return (new TacticalMarine(*this));
}

void		TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT!" << std::endl;
}

void		TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void		TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attack with a chainsword *" << std::endl;
}
