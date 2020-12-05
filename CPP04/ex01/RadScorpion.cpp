/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:02:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 11:32:49 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion &rad) : Enemy(170, "Super Mutant")
{
	*this = rad;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROCTH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion &rad)
{
	Enemy::operator=(rad);
	return (*this);
}

void	RadScorpion::takeDamage(int hp)
{
	Enemy::takeDamage(hp);
}
