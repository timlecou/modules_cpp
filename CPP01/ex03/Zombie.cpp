/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:04:31 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 15:02:03 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::string		name[11] = {"Edwardo", "Gilbert", "Pierrick", "Clovis", "kimK", "Patrick", "Brittany", "Sylvie", "Daniel", "Michel", "Jessica"};
	int		nb = rand() % 11;

	this->_name = name[nb];
	this->_type = "random";
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " " << this->_type << "> ";
	std::cout << "Braiiiiiiinnsssssss ..." << std::endl;
}

#endif
