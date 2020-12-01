/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:23:16 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 14:35:55 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "NINJ4-TP a ninja has been created" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	std::cout << "NINJ4-TP a ninja has been created" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &trap)
{
	*this = trap;
	std::cout << "NINJ4-TP a ninja has been created by copy" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJ4-TP a ninja just died" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const &ninja)
{
	std::cout << "NINJ4-TP Assignation operator called" << std::endl;
	if (this != &ninja)
	{
		this->_hit_pts = ninja._hit_pts;
		this->_max_hit_pts = ninja._max_hit_pts;
		this->_energy_pts = ninja._energy_pts;
		this->_max_energy_pts = ninja._max_energy_pts;
		this->_level = ninja._level;
		this->_m_attack = ninja._m_attack;
		this->_r_attack = ninja._r_attack;
		this->_armor = ninja._armor;
		this->_name = ninja._name;
	}
	return (*this);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << "NINj4-TP " << this->_name;
	std::cout << " is speaking to the CL4P-TP ";
	std::cout << clap._name << " !" << std::endl;
	std::cout << "Let me tell you a joke:" << std::endl;

	std::cout << "How many skags would Brick eat if Brick could eat skags?";
	std::cout << std::endl;
	std::cout << "All of them! Hahaha, Ninja's have great humor right?";
	std::cout << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << "NINj4-TP " << this->_name;
	std::cout << " is speaking to the FR4G-TP ";
	std::cout << frag._name << " !" << std::endl;
	std::cout << "Let me tell you a joke:" << std::endl;

	std::cout << "Do you know the difference between a hippo and a zippo?";
	std::cout << std::endl;
	std::cout << "One is really heavy and the other one is a little lighter.";
	std::cout << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << "NINj4-TP " << this->_name;
	std::cout << " is speaking to the SC4V-TP ";
	std::cout << scav._name << " !" << std::endl;
	std::cout << "Let me tell you a joke:" << std::endl;

	std::cout << "What never shuts up but is impossible to find?";
	std::cout << std::endl;
	std::cout << "ClapTraps! And guess what? NinjaTraps are harder to find!";
	std::cout << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << "NINj4-TP " << this->_name;
	std::cout << " is speaking to the NINj4-TP ";
	std::cout << ninja._name << " !" << std::endl;
	std::cout << "Let me tell you a joke:" << std::endl;

	std::cout << "What is the last thing to go through bandits' mind when they meet Brick?";
	std::cout << std::endl;
	std::cout << "Brick's Fist. HAHAHAH I crack myself up.";
	std::cout << std::endl << std::endl;
}
