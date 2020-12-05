/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:52:12 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/02 12:53:09 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main(void)
{
	Sorcerer	robert("Robert", "The Magnificent");
	Sorcerer	nico("Nico", "The Brave");
	Sorcerer	tim(robert);

	robert = nico;	

	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Victim		thomas(jim);

	std::cout << "----------------Announces-----------------" << std::endl;
	std::cout << robert << tim << nico << jim << joe << thomas;
	std::cout << "------------------------------------------" << std::endl;

	std::cout << "-----------------Polymorphs---------------" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	thomas.getPolymorphed();
	std::cout << "------------------------------------------" << std::endl;
	return (0);
}
