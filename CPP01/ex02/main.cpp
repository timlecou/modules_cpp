/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:43:44 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 13:57:36 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	srand(time(0));
	Zombie	*zomb = ZombieEvent("ugly").newZombie("zoboze");
	ZombieEvent	zomb2("nom");
	zomb->advert();
	zomb2.randomChump();
	delete	zomb;
	return (0);
}
