/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:16:05 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 13:50:14 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type): _setZombieType(type)
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, this->_setZombieType);
	return (zombie);
}

void	ZombieEvent::randomChump(void) const
{
	std::string		name[11] = {"Edwardo", "Gilbert", "Pierrick", "Clovis", "kimK", "Patrick", "Brittany", "Sylvie", "Daniel", "Michel", "Jessica"};
	int		nb = rand() % 10;

	Zombie	zomb(name[nb], "random");
	zomb.advert();
}
