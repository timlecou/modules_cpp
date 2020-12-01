/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:07:10 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 17:49:34 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "SUP3R-TP constructor called" << std::endl;
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 50;
	this->_max_energy_pts = 50;
	this->_level = 1;
	this->_m_attack = 20;
	this->_r_attack = 20;
	this->_armor = 5;
}

SuperTrap::SuperTrap(std::string n): ClapTrap(n), FragTrap(n), NinjaTrap(n)
{
	std::cout << "SUP3R-TP constructor called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap &s): FragTrap(s), NinjaTrap(s)
{
	*this = s;
	std::cout << "SUP3R-TP Copy constructor called" << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUP3R-TP destructor called" << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap & super)
{
	ClapTrap::operator=(super);
	std::cout << "SUP3R-TP assignation operator called" << std::endl;
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const & target) const
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) const
{
	NinjaTrap::meleeAttack(target);
}
