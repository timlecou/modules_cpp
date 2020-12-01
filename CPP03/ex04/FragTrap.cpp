/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:23:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:36:25 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FR4G-TP a robot has been created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
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
