/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:23:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:56:15 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_hit_pts = 100;
	_max_hit_pts = 100;
	_energy_pts = 50;
	_max_energy_pts = 50;
	_level = 1;
	_m_attack = 20;
	_r_attack = 15;
	_armor = 3;
	std::cout << "SC4V-TP a robot has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): _name(name)
{
	_hit_pts = 100;
	_max_hit_pts = 100;
	_energy_pts = 50;
	_max_energy_pts = 50;
	_level = 1;
	_m_attack = 20;
	_r_attack = 15;
	_armor = 3;
	std::cout << "SC4V-TP a robot has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	*this = scav;
	std::cout << "SC4V-TP a robot has been created by copy" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP a robot just died" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &scav)
{
	std::cout << "SC4V-TP Assignation operator called" << std::endl;
	if (this != &scav)
	{
		this->_hit_pts = scav._hit_pts;
		this->_max_hit_pts = scav._max_hit_pts;
		this->_energy_pts = scav._energy_pts;
		this->_max_energy_pts = scav._max_energy_pts;
		this->_level = scav._level;
		this->_m_attack = scav._m_attack;
		this->_r_attack = scav._r_attack;
		this->_armor = scav._armor;
		this->_name = scav._name;
	}
	return (*this);
}

void	ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "SC4V-TP <" << _name << "> attack <" << target;
	std::cout << "> in hand-to-hand combat, causing <" << _m_attack;
	std::cout << "> points of damage !" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "SC4V-TP <" << _name << "> attack <" << target;
	std::cout << "> form a distance, causing <" << _r_attack;
	std::cout << "> points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_hit_pts -= (amount - this->_armor);
	if (this->_hit_pts < 0)
		this->_hit_pts = 0;
	std::cout << "SC4V-TP " << this->_name << " lose ";
	std::cout << amount - this->_armor << " hit points !" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hit_pts += amount;
	if (this->_hit_pts > this->_max_hit_pts)
		this->_hit_pts = this->_max_hit_pts;
	std::cout << "SC4V-TP " << this->_name << " get " << amount;
	std::cout << " hit points !" << std::endl;
}

void	ScavTrap::challengeNewcomer(void) const
{
	std::string	challenge[5] = {"Try to not laugh", "Ice Bucket", "Make a cheesecake with cheese", "Climb a mountain totally naked", "Eat 50 hot-dog"};
	int		i = rand() % 5;
	std::cout << "SC4V-TP " << this->_name;
	std::cout << " is subimitted to the following challenge: " << challenge[i];
	std::cout << " !" << std::endl;
}

void	ScavTrap::displayStats(void) const
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
