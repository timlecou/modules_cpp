/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:02:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 11:28:49 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant &super) : Enemy(170, "Super Mutant")
{
	*this = super;
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Argh ..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant &super)
{
	Enemy::operator=(super);
	return (*this);
}

void	SuperMutant::takeDamage(int hp)
{
	Enemy::takeDamage(hp - 3);
}
