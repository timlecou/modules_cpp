/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:03:23 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/29 18:42:43 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
	return ;
}

Weapon::Weapon()
{
	this->setType("default type");
}

Weapon::~Weapon()
{
	return ;
}

std::string	&Weapon::getType(void)
{
	return (_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
