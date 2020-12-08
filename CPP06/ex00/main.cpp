/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:20:08 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 16:34:25 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	doChar(double arg)
{
	std::cout << "char: ";
	try {
		char	c = Convert::getToChar(arg);
		std::cout << '\'' << c << '\'' << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	doInt(double arg)
{
	std::cout << "int: ";
	try {
		std::cout << Convert::getToInt(arg) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	doFloat(double arg, int prec)
{
	std::cout << "Float: ";
	try {
		std::cout << std::setprecision(prec) << std::fixed << Convert::getToFloat(arg) << 'f' << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	doDouble(double arg, int prec)
{
	std::cout << "Double: ";
	try {
		std::cout << std::setprecision(prec) << std::fixed << arg << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	double	arg = strtod(av[1], av);
	int		prec = Convert::getPrec(av[1]);
	doChar(arg);
	doInt(arg);
	doFloat(arg, prec);
	doDouble(arg, prec);
	return (0);
}
