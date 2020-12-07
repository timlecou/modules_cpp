/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:32:03 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 17:17:20 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern &in)
{
	*this = in;
}

Intern&		Intern::operator=(const Intern &in)
{
	(void)in;
	return (*this);
}

const char *Intern::TypeNotFoundException::what() const throw()
{
	return ("Type not found by the intern");
}

Form*	Intern::makeForm(std::string type, std::string target)
{
	(void)target;
	if (isknown(type) == true)
	{
		if (type == "Shrubbery Creation")
			return (ShrubberyCreate(target));
		if (type == "Robotomy Request")
			return (RobotomyCreate(target));
		if (type == "Presidential Pardon")
			return (PresidentCreate(target));
	}
	throw Intern::TypeNotFoundException();
	return (NULL);
}

bool	Intern::isknown(std::string type)
{
	if (type != "Shrubbery Creation" && type != "Robotomy Request" && type != "Presidential Pardon")
		return (false);
	return (true);
}

Form	*Intern::RobotomyCreate(std::string target)
{
	Form*	form = new RobotomyRequestForm(target);
	std::cout << "Intern creates form <" << form->getName() << ">" << std::endl;
	return (form);
}

Form	*Intern::PresidentCreate(std::string target)
{
	Form*	form = new PresidentialPardonForm(target);
	std::cout << "Intern creates form <" << form->getName() << ">" << std::endl;
	return (form);
}

Form	*Intern::ShrubberyCreate(std::string target)
{
	Form*	form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates form <" << form->getName() << ">" << std::endl;
	return (form);
}
