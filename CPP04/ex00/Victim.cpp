/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:51:00 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/02 12:47:05 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name;
	std::cout << " just appeared!" << std::endl;
}

Victim::Victim(Victim &vic)
{
	this->_name = vic._name;
	std::cout << "A random victim called " << this->_name;
	std::cout << " just appeared by copy!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name;
	std::cout << " died for no appaprent reason!" << std::endl;
}

Victim&	Victim::operator=(const Victim &vic)
{
	this->_name = vic._name;
	std::cout << "Victim assignation operator called" << std::endl;
	return (*this);
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been polymorphed in a cute little sheep!" << std::endl;
}

std::ostream&	operator<<(std::ostream &o, const Victim &vic)
{
	o << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return (o);
}
