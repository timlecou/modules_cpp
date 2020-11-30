/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:01:42 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 11:12:30 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "wrong number of arguments" << std::endl;
		return (1);
	}
	else if ((std::string)av[1] == "" || (std::string)av[2] == "" || (std::string)av[3] == "")
	{
		std::cerr << "parameters must be non-zero" << std::endl;
		return (1);
	}
	return (ft_replace(av));
}
