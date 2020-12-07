/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:33:57 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 16:22:50 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;

	ShrubberyCreationForm	rev("House");

	Bureaucrat	bu("Tim", 43);
	std::cout << bu << std::endl;
	try
	{
		rev.beSigned(bu);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	bu.incGrade();
	std::cout << bu << std::endl;
	try
	{
		rev.beSigned(bu);
		rev.execute(bu);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;

	RobotomyRequestForm	rev2("Boss");

	Bureaucrat	bu2("Nico", 46);
	Bureaucrat	bu3("Momo", 150);
	std::cout << bu2 << std::endl;
	try
	{
		rev2.beSigned(bu2);
		rev2.beSigned(bu3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	bu2.incGrade();
	std::cout << bu2 << std::endl;
	try
	{
		rev2.beSigned(bu2);
		rev2.execute(bu2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl << std::endl;

	PresidentialPardonForm	rev3("Me");

	Bureaucrat	bu4("Thomas", 1);
	std::cout << bu4 << std::endl;
	bu4.incGrade();
	try
	{
		rev3.execute(bu4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		rev3.beSigned(bu4);
		rev3.execute(bu4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	PresidentialPardonForm	rev4("Moi");

	Bureaucrat	bu5("Rob", 1);

	try
	{
		rev4.beSigned(bu5);
		bu5.executeForm(rev4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
