/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:30:53 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 18:08:58 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_dot = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int nb)
{
	this->_dot = nb << this->_bitsNb;
}

Fixed::Fixed(const float nb)
{
	this->_dot = nb * (1 << this->_bitsNb);
}

Fixed&	Fixed::operator=(Fixed const &fi)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fi)
		this->_dot = fi.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->_dot);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called" << std::endl;
	this->_dot = raw;
}

float	Fixed::toFloat(void) const
{
	return (_dot / (1 << _bitsNb));
}

int		Fixed::toInt(void) const
{
	return (_dot >> _bitsNb);
}

std::ostream&	operator<<(std::ostream& out, const Fixed &fi)
{
	out << fi.toFloat();
	return (out);
}
