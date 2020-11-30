/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:36:59 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/27 19:43:34 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string n, std::string c): _name(n), _color(c)
{
	std::cout << _name << " was born ! It's a " << _color << " poney !" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << _name << " died" << std::endl;
}

void	Pony::eat(std::string thing) const
{
	std::cout << _name << " is eating a " << thing << std::endl;
}

void	Pony::run(int distance) const
{
	std::cout << _name << " is runnning over " << distance << " miles !" << std::endl;
}

void	Pony::sleep(int time) const
{
	std::cout << _name << " is sleeping for ";
	std::cout << time << " hours" << std::endl;
}
