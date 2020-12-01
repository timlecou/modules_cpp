/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:23:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:49:57 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_hit_pts = 100;
	_max_hit_pts = 100;
	_energy_pts = 100;
	_max_energy_pts = 100;
	_level = 1;
	_m_attack = 30;
	_r_attack = 20;
	_armor = 5;
	std::cout << "CL4P-TP constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
	*this = trap;
	std::cout << "CL4P-TP copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
	_hit_pts = 100;
	_max_hit_pts = 100;
	_energy_pts = 100;
	_max_energy_pts = 100;
	_level = 1;
	_m_attack = 30;
	_r_attack = 20;
	_armor = 5;
	std::cout << "CL4P-TP constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "CL4P-TP Assignation operator called" << std::endl;
	if (this != &clap)
	{
		this->_hit_pts = clap._hit_pts;
		this->_max_hit_pts = clap._max_hit_pts;
		this->_energy_pts = clap._energy_pts;
		this->_max_energy_pts = clap._max_energy_pts;
		this->_level = clap._level;
		this->_m_attack = clap._m_attack;
		this->_r_attack = clap._r_attack;
		this->_armor = clap._armor;
		this->_name = clap._name;
	}
	return (*this);
}

void	ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << "CL4P-TP <" << _name << "> attack <" << target;
	std::cout << "> in hand-to-hand combat, causing <" << _m_attack;
	std::cout << "> points of damage !" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << "CL4P-TP <" << _name << "> attack <" << target;
	std::cout << "> form a distance, causing <" << _r_attack;
	std::cout << "> points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_pts -= (amount - this->_armor);
	if (this->_hit_pts < 0)
		this->_hit_pts = 0;
	std::cout << "CL4P-TP " << this->_name << " lose ";
	std::cout << amount - this->_armor << " hit points !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_pts += amount;
	if (this->_hit_pts > this->_max_hit_pts)
		this->_hit_pts = this->_max_hit_pts;
	std::cout << "CL4P-TP " << this->_name << " get " << amount;
	std::cout << " hit points !" << std::endl;
}

void	ClapTrap::displayStats(void) const
{
	std::cout << "------------------STATS--------------------" << std::endl;
	std::cout << "-------------------";
	std::cout << this->_name << "-------------------" << std::endl;
	std::cout << "Hit points: " << this->_hit_pts << std::endl;
	std::cout << "Max hit points: " << this->_max_hit_pts << std::endl;
	std::cout << "Energy points: " << this->_energy_pts << std::endl;
	std::cout << "Max energy points: " << this->_max_energy_pts << std::endl;
	std::cout << "Level: " << this->_level << std::endl;
	std::cout << "Melee attack damage: " << this->_m_attack << std::endl;
	std::cout << "Ranged attack damage: " << this->_r_attack << std::endl;
	std::cout << "Armor damage reduction: " << this->_armor << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
}
