/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:21:07 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 11:58:15 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	setType(type);
	setHP(hp);
	this->_alive = true;
	return ;
}

Enemy::Enemy(Enemy &en)
{
	*this = en;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy&	Enemy::operator=(const Enemy &en)
{
	setType(en.getType());
	setHP(en.getHP());
	return (*this);
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

int		Enemy::getHP(void) const
{
	return (this->_hp);
}

void	Enemy::setType(std::string type)
{
	this->_type = type;
	return ;
}

void	Enemy::setHP(int hp)
{
	this->_hp = hp;
	return ;
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (this->_hp <= damage)
		this->_hp = 0;
	else
		this->_hp -= damage;
}

bool	Enemy::isAlive(void) const
{
	return (_alive);
}
