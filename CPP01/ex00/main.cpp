/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:08:14 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/27 19:28:15 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	pony("Tempete", "black");

	pony.eat("big apple");
	pony.run(3);
	pony.sleep(6);
}

void	ponyOnTheHeap(void)
{
	Pony	*pony = new Pony("Tornade", "white");

	pony->eat("carrot");
	pony->run(12);
	pony->sleep(2);
	
	delete pony;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
