/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:04:31 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 10:48:02 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
	std::cout << "<" << name << " " << type << ">" << " was born" << std::endl;
}

void	Zombie::advert(void) const
{
	std::cout << "<" << this->_name << " " << this->_type << "> ";
	std::cout << "Braiiiiiiinnsssssss ..." << std::endl;
}
