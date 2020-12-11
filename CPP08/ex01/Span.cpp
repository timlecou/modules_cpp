/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:48:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/11 16:42:34 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->_arr = new int [0];
	this->_size = 0;
	this->_nb = 0;;
}

Span::Span(unsigned int i)
{
	this->_arr = new int [i];
	this->_size = i;
	for (unsigned int j = 0; j < i; j++)
		this->_arr[i] = 0;
	this->_nb = 0;
}

Span::~Span(void)
{
	delete[] this->_arr;
}

Span::Span(const Span &sp)
{
	*this = sp;
}

Span&	Span::operator=(const Span &sp)
{
	for (int i = 0; i < sp.getSize(); i++)
		this->_arr[i] = sp._arr[i];
	this->_size = sp.getSize();
	this->_nb = sp.getNB();
	return (*this);
}

int		Span::getSize(void) const
{
	return (this->_size);
}

int		Span::getNB(void) const
{
	return (this->_nb);
}

void	Span::addNumber(int nb)
{
	if (getNB() < getSize())
	{
		this->_arr[getNB()] = nb;
		this->_nb++;
	}
	else
		throw ArrayIsFullException();
}

void	Span::addNumber(unsigned int begin, unsigned int end)
{
	if (getNB() < getSize())
	{
		while (begin <= end)
		{
			this->_arr[getNB()] = begin;
			this->_nb++;
			begin++;
			if (getNB() >= getSize())
				throw ArrayIsFullException();
		}
	}
	else
		throw ArrayIsFullException();
}

const char* Span::ArrayIsFullException::what(void) const throw()
{
	return ("Array is full, you can't add any numbers");
}

const char* Span::TooSmallArrayException::what(void) const throw()
{
	return ("Array is too small to compare numbers");
}

unsigned int	Span::shortestSpan(void)
{
	if (getSize() <= 1 || getNB() < 2)
		throw TooSmallArrayException();
	int		*tmp = new int[getSize()];
	for (int j = 0; j < getNB(); j++)
		tmp[j] = this->_arr[j];
	std::sort(tmp, tmp + getNB());
	int	i = 2;
	int	nb = tmp[1] - tmp[0];
	for (int k = 1; k < getNB() && i < getNB(); k++)
	{
		if (nb > tmp[i] - tmp[k])
			nb = tmp[i] - tmp[k];
		i++;
	}
	delete[] tmp;
	return (nb);
}

unsigned int	Span::longestSpan(void)
{
	if (getSize() <= 1 || getNB() < 2)
		throw TooSmallArrayException();
	return (*std::max_element(this->_arr, this->_arr + getNB()) - *std::min_element(this->_arr, this->_arr + getNB()));
}
