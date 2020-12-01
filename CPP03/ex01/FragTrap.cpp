/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:23:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:51:27 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_hit_pts = 100;
	_max_hit_pts = 100;
	_energy_pts = 100;
	_max_energy_pts = 100;
	_level = 1;
	_m_attack = 30;
	_r_attack = 20;
	_armor = 5;
	std::cout << "FR4G-TP a robot has been created" << std::endl;
}

FragTrap::FragTrap(std::string name): _name(name)
{
	_hit_pts = 100;
	_max_hit_pts = 100;
	_energy_pts = 100;
	_max_energy_pts = 100;
	_level = 1;
	_m_attack = 30;
	_r_attack = 20;
	_armor = 5;
	std::cout << "FR4G-TP a robot has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &trap)
{
	*this = trap;
	std::cout << "FR4G-TP a robot has been created by copy" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP a robot just died" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &frag)
{
	std::cout << "FR4G-TP Assignation operator called" << std::endl;
	if (this != &frag)
	{
		this->_hit_pts = frag._hit_pts;
		this->_max_hit_pts = frag._max_hit_pts;
		this->_energy_pts = frag._energy_pts;
		this->_max_energy_pts = frag._max_energy_pts;
		this->_level = frag._level;
		this->_m_attack = frag._m_attack;
		this->_r_attack = frag._r_attack;
		this->_armor = frag._armor;
		this->_name = frag._name;
	}
	return (*this);
}

void	FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP <" << _name << "> attack <" << target;
	std::cout << "> in hand-to-hand combat, causing <" << _m_attack;
	std::cout << "> points of damage !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP <" << _name << "> attack <" << target;
	std::cout << "> form a distance, causing <" << _r_attack;
	std::cout << "> points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_hit_pts -= (amount - this->_armor);
	if (this->_hit_pts < 0)
		this->_hit_pts = 0;
	std::cout << "FR4G-TP " << this->_name << " lose ";
	std::cout << amount - this->_armor << " hit points !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hit_pts += amount;
	if (this->_hit_pts > this->_max_hit_pts)
		this->_hit_pts = this->_max_hit_pts;
	std::cout << "FR4G-TP " << this->_name << " get " << amount;
	std::cout << " hit points !" << std::endl;
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[5] = {"Shogun Trinity", "Shockfist", "Heavy Barrage", "Shater Punch", "Ducking Body Combo"};
	int		i = rand() % 5;
	if (this->_energy_pts < 25)
	{
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " hasn't enough energy to use this attack !" << std::endl;
		return (0);
	}
	std::cout << "FR4G-TP " << this->_name << " used a " << attack[i];
	std::cout << " against " << target << " !" << std::endl;
	this->_energy_pts -= 25;
	std::cout << "FR4G-TP " << this->_name << " lose 25 energy points !" << std::endl;
	return (1);
}

void	FragTrap::displayStats(void) const
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
