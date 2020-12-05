/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:43:23 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/02 12:46:19 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title;
	std::cout << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &sor)
{
	*this = sor;
	std::cout << this->_name << ", " << this->_title;
	std::cout << ", is born by copy!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title;
	std::cout << ", is dead. Consequences will never be the same!";
	std::cout << std::endl;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer &sor)
{
	this->_name = sor._name;
	this->_title = sor._title;
	std::cout << "Sorcerer assignation operator called" << std::endl;
	return (*this);
}

std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream&	operator<<(std::ostream& o, const Sorcerer &sor)
{
	o << "I am " << sor.getName() << ", " << sor.getTitle() << ", and i like ponies!" << std::endl;
	return (o);
}

void	Sorcerer::polymorph(Victim const &vic)
{
	vic.getPolymorphed();
}
