/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:36:59 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/27 19:34:50 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string n, std::string c): name(n), color(c)
{
	std::cout << name << " was born ! It's a " << color << " poney !" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << name << " died" << std::endl;
}

void	Pony::eat(std::string thing) const
{
	std::cout << name << " is eating a " << thing << std::endl;
}

void	Pony::run(int distance) const
{
	std::cout << name << " is runnning over " << distance << " miles !" << std::endl;
}

void	Pony::sleep(int time) const
{
	std::cout << name << " is sleeping for ";
	std::cout << time << " hours" << std::endl;
}
