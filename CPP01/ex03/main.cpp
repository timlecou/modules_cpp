/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:43:44 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 15:04:05 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	srand(time(0));
	ZombieHorde	horde(10);
	horde.announce();
	return (0);
}
