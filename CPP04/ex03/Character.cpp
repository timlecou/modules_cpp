/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:04:46 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:37:02 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): _name(name)
{
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(const Character &c)
{
	this->_name = c.getName();
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	for (unsigned int j = 0; j < c.getCount(); j++)
		this->_inv[j] = c._inv[j]->clone();
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] != NULL)
			delete this->_inv[i];
	}
}

Character&	Character::operator=(const Character &c)
{
	this->_name = c.getName();
	for (unsigned int i = 0; i < this->_count; i++)
		if (this->_inv[i] != NULL)
			delete this->_inv[i];
	for (unsigned int j = 0; j < c._count; j++)
		this->_inv[j] = c._inv[j]->clone();
	return (*this);
}

unsigned int	Character::getCount(void) const
{
	return (_count);
}

std::string const&	Character::getName(void) const
{
	return (this->_name);
}

void		Character::equip(AMateria *m)
{
	if (this->_count > 3 || !m)
		return ;
	this->_inv[this->_count] = m;
	this->_count++;
}

void		Character::unequip(int idx)
{
	if (idx >= 0 && (unsigned int)idx < this->_count)
	{
		if (this->_inv[idx] != NULL)
		{
			this->_inv[idx] = NULL;
			this->_count--;
		}
	}
}

void		Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && (unsigned int)idx < this->_count)
	{
		if (this->_inv[idx] != NULL)
			this->_inv[idx]->use(target);
	}
}
