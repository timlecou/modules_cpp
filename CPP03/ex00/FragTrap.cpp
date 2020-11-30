/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:23:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 22:49:52 by timlecou         ###   ########.fr       */
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
	std::cout << "FR4G-TP <" << _name << "> attaque <" << target;
	std::cout << "> au corps a corps, causant <" << _m_attack;
	std::cout << "> points de dégâts !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP <" << _name << "> attaque <" << target;
	std::cout << "> à distance, causant <" << _r_attack;
	std::cout << "> points de dégâts !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_energy_pts -= (amount - this->_armor);
	std::cout << "FR4G-TP " << this->_name << " lose ";
	std::cout << amount - this->_armor << " energy points !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_energy_pts += amount;
	if (this->_energy_pts > this->_max_energy_pts)
		this->_energy_pts = this->_max_energy_pts;
	std::cout << "FR4G-TP " << this->_name << " get " << amount;
	std::cout << " energy points !" << std::endl;
}
