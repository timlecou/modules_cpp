/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:20:07 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 17:49:25 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->setType(type);
	this->_xp = 0;
}

AMateria::AMateria(const AMateria &mat)
{
	*this = mat;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria&	AMateria::operator=(const AMateria &mat)
{
	this->_xp = mat.getXP();
	return (*this);
}

void	AMateria::setType(std::string const &type)
{
	this->_type = type;
}

std::string const&	AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int		AMateria::getXP(void) const
{
	return (this->_xp);
}

void		AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

void		AMateria::setXP(int xp)
{
	this->_xp = xp;
}
