/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:23:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:39:25 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "SC4V-TP a robot has been created" << std::endl;
	ClapTrap();
}

ScavTrap::ScavTrap(const ScavTrap &trap)
{
	*this = trap;
	std::cout << "SC4V-TP a robot has been created by copy" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "SC4V-TP a robot has been created" << std::endl;
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

void	ScavTrap::challengeNewcomer(void) const
{
	std::string	challenge[5] = {"Try to not laugh", "Ice Bucket", "Make a cheesecake with cheese", "Climb a mountain totally naked", "Eat 50 hot-dog"};
	int		i = rand() % 5;
	std::cout << "SC4V-TP " << this->_name;
	std::cout << " is subimitted to the following challenge: " << challenge[i];
	std::cout << " !" << std::endl;
}
