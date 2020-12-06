/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:18:30 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:50:52 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): Victim(name)
{
	std::cout << "Braiiinnss." << std::endl;
}

Zombie::Zombie(Zombie &zombie): Victim(zombie.getName())
{
	std::cout << "Braiiinnss." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "AAAAaaaarrrrrrgghhhh..." << std::endl;
}

Zombie&	Zombie::operator=(const Zombie &zombie)
{
	this->_name = zombie.getName();
	return (*this);
}

void	Zombie::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute parrot!";
	std::cout << std::endl;
}
