/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:33:57 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 19:02:21 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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
	std::cout << std::endl << std::endl << std::endl;

	Form	rev("Forbid internet at school", 42, 1);

	Bureaucrat	bu("Tim", 43);
	std::cout << bu << std::endl;
	try
	{
		rev.beSigned(bu);
	}
	catch (std::exception &e)
	{
	}
	bu.incGrade();
	std::cout << bu << std::endl;
	try
	{
		rev.beSigned(bu);
	}
	catch (std::exception &e)
	{
	}
	return (0);
}
