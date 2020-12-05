/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:44:25 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 13:05:47 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->_units = NULL;
	this->_count = 0;
}

Squad::Squad(Squad &sq)
{
	int		n = sq.getCount();

	if (sq._units)
	{
		this->_units = new ISpaceMarine* [n];
		for (int i = 0; i < n; i++)
			this->_units[i] = sq.getUnit(i)->clone();
	}
	else
		this->_units = NULL;
	this->_count = n;
}

Squad::~Squad(void)
{
	this->clear();
}

Squad&	Squad::operator=(const Squad &sq)
{
	if (this->_units)
	{
		this->clear();
		for (int i = 0; i < sq.getCount(); i++)
		{
			this->push(sq.getUnit(i)->clone());
		}
	}
	this->_count = sq.getCount();
	return (*this);
}

int		Squad::getCount(void) const
{
	return (this->_count);
}

void	Squad::clear(void)
{
	int		n = this->getCount();

	for (int i = 0; i < n; i++)
		delete this->getUnit(i);
	delete this->_units;
	this->_units = NULL;
	this->_count = 0;
}

int		Squad::push(ISpaceMarine* sp)
{
	if (sp)
	{
		ISpaceMarine	**sp2;
		for (int i = 0; i < getCount(); i++)
		{
			if (getUnit(i) == sp)
				return (getCount());
		}
		sp2 = new ISpaceMarine *[getCount() + 1];
		for (int j = 0; j < getCount(); j++)
			sp2[j] = getUnit(j);
		sp2[getCount()] = sp;
		delete[] this->_units;
		this->_units = sp2;
		this->_count++;
	}
	return (getCount());
}

ISpaceMarine*	Squad::getUnit(int i) const
{
	if (i >= 0 && i <= getCount())
	{
		return (this->_units[i]);
	}
	return (NULL);
}
