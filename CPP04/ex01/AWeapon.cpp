/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:36:28 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 10:44:13 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	setName(name);
	setAPCost(apcost);
	setDamage(damage);
}

AWeapon::AWeapon(AWeapon &weap)
{
	*this = weap;
}

AWeapon::~AWeapon(void)
{
}

AWeapon&	AWeapon::operator=(const AWeapon &weap)
{
	this->_name = weap.getName();
	this->_apcost = weap.getAPCost();
	this->_damage = weap.getDamage();
	return (*this);
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int			AWeapon::getDamage(void) const
{
	return (this->_damage);
}

void		AWeapon::setName(std::string name)
{
	this->_name = name;
}

void		AWeapon::setAPCost(int apcost)
{
	this->_apcost = apcost;
}

void		AWeapon::setDamage(int damage)
{
	this->_damage = damage;
}
