/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:33:57 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 17:24:13 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern	in;
	Bureaucrat	bu("Tim", 1);
	Form	*fo;

	try
	{
		fo = in.makeForm("Shrubbery Creation", "People");
		fo->beSigned(bu);
		bu.executeForm(*fo);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	Intern	in2;
	Bureaucrat	bu2("Momo", 1);
	Form	*fo2;

	try
	{
		fo2 = in2.makeForm("Robotomy Request", "Jimmy");
		fo2->beSigned(bu2);
		bu2.executeForm(*fo2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	Intern	in3;
	Bureaucrat	bu3("Nico", 1);
	Form	*fo3;

	try
	{
		fo3 = in3.makeForm("Presidential Pardon", "Momo");
		fo3->beSigned(bu3);
		bu3.executeForm(*fo3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	Intern	in4;
	Bureaucrat	bu4("Rob", 1);
	Form	*fo4;

	try
	{
		fo4 = in.makeForm("test", "People");
		fo4->beSigned(bu4);
		bu4.executeForm(*fo4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	return (0);
}
