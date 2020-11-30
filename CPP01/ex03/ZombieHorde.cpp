/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:25:30 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 15:01:54 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(unsigned int n)
{
	this->_n = n;
	if (n < 1)
		return ;
	this->_zombs = new Zombie[n];
}

ZombieHorde::~ZombieHorde()
{
	if (this->_n > 0)
		delete[] this->_zombs; 
}

void	ZombieHorde::announce(void) const
{
	int		i;

	i = 0;
	while (i < this->_n)
	{
		this->_zombs[i].announce();
		i++;
	}
}
