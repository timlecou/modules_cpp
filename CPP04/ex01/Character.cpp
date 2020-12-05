/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:36:50 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 14:06:23 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): _name(name)
{
	this->_ap = 40;
	return ;
}

Character::Character(Character &Char)
{
	*this = Char;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character&	Character::operator=(const Character &Char)
{
	this->_name = Char.getName();
	this->_ap = Char.getAP();
	this->_weap = Char.getWeap();
	return (*this);
}

std::string		Character::getName(void) const
{
	return (this->_name);
}

int				Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon*	Character::getWeap(void) const
{
	return (this->_weap);
}

void		Character::recoverAP(void)
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void		Character::equip(AWeapon *weap)
{
	this->_weap = weap;
}

void		Character::setAP(int nb)
{
	this->_ap = nb;
}

void		Character::attack(Enemy *enemy)
{
	if (! (*enemy).isAlive())
	{
		std::cout << "This enemy is already dead." << std::endl;
		return ;
	}
	if (this->_weap != NULL)
	{
		const int apCost = _weap->getAPCost();
		const int damages = _weap->getDamage();
		if (apCost > getAP())
		{
			std::cout << "Character " << getName() << " does not have enough action points." << std::endl;
		}
		else
		{
			setAP(getAP() - apCost);
			std::cout << "Character " << getName() << " attacks enemy " << enemy->getType() << " with weapon " << _weap->getName()
					  << std::endl;
			_weap->attack();
			enemy->takeDamage(damages);
			if (enemy->getHP() == 0) {
				delete enemy;
			}
		}
	}
	else
	{
		std::cout << "Character " << getName() << " does not have weapon, ouups." << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &o, const Character &Char)
{
	if (Char.getWeap() != NULL)
		o << Char.getName() << " has " << Char.getAP() << " AP and carries a " << Char.getWeap()->getName() << std::endl;
	else
		o << Char.getName() << " has " << Char.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}
