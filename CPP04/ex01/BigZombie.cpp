/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:02:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:21:07 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BigZombie.hpp"

BigZombie::BigZombie(void) : Enemy(100, "Big Zombie")
{
	std::cout << "* Brraaiiiinsss.... *" << std::endl;
}

BigZombie::BigZombie(BigZombie &zombie) : Enemy(100, "Big Zombie")
{
	*this = zombie;
	std::cout << "* Brraaiiiinsss.... *" << std::endl;
}

BigZombie::~BigZombie(void)
{
	std::cout << "* AAAAArrrrghhhhh..... *" << std::endl;
}

BigZombie&	BigZombie::operator=(const BigZombie &zombie)
{
	Enemy::operator=(zombie);
	return (*this);
}

void	BigZombie::takeDamage(int hp)
{
	Enemy::takeDamage(hp);
}
