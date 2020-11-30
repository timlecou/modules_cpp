/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:10:51 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 11:32:17 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int		ft_replace(char **av)
{
	std::ifstream	ifs(av[3], std::ios::in);
	std::string		s1 = av[1];
	std::string		s2 = av[2];
	std::string		fileName = av[3];
	std::string		tmp = "";
	std::string		newStr;
	size_t			n = 0;
	
	fileName += ".replace";
	if (ifs.is_open())
		std::getline(ifs, newStr, '\0');
	else
	{
		std::cerr << "cannot open the file" << std::endl;
		return (1);
	}
	ifs.close();
	std::ofstream	ofs(fileName);
	if (newStr.size() > 0)
	{
		while ((n = newStr.find(s1, n)) != std::string::npos)
		{
			newStr.replace(n, s1.size(), s2);
			n += s2.size();
		}
		newStr.erase(newStr.size() - 1);
		ofs << newStr << std::endl;
	}
	return (0);
}
