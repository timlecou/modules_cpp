/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:38:29 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 19:26:03 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_copy[i] = NULL;
	this->_count = 0;
}

MateriaSource::MateriaSource(const MateriaSource &mat)
{
	this->_count = 0;
	for (unsigned int i = 0; i < mat._count; i++)
		this->_copy[this->_count++] = mat._copy[i];
	for (int j = mat._count; j < 4; j++)
		this->_copy[j] = NULL;
	(void)mat;
}

MateriaSource::~MateriaSource(void)
{
	for (unsigned int i = 0; i < this->_count; i++)
		delete this->_copy[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& mat)
{
	this->_count = mat._count;
	for (unsigned int i = 0; i < this->_count; i++)
	{
		delete this->_copy[i];
		this->_copy[i] = NULL;
	}
	this->_count = 0;
	for (int j = 0; j < 4; j++)
		this->_copy[j] = mat._copy[j]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count < 4 && m)
	{
		this->_copy[this->_count++] = m;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (this->isknown(type))
	{
		for (unsigned int i = 0; i < this->_count; i++)
		{
			if (this->_copy[i]->getType() == type)
				return (this->_copy[i]->clone());
		}
	}
	return (NULL);
}

bool	MateriaSource::isknown(std::string const & type) const
{
	for (unsigned int i = 0; i < this->_count; i++)
	{
		if (this->_copy[i]->getType() == type)
			return (true);
	}
	return (false);
}
