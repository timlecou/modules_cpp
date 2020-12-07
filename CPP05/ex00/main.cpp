/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:33:57 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 18:58:44 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	try
	{
		Bureaucrat	bu("Tim", 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bu("Nico", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bu("Tim", 150);
		bu.incGrade();
		std::cout << bu << std::endl;
		bu.decGrade();
		std::cout << bu << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
