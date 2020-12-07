/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:33:34 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 16:57:44 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ro): Form("Robotomy Request", 72, 45, ro.getTarget())
{
	*this = ro;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &ro)
{
	setTarget(ro.getTarget());
	return (*this);
}

void	RobotomyRequestForm::execute (const Bureaucrat &bu) const
{
	if (getEgrade() < bu.getGrade())
		throw Form::GradeTooLowException();
	if (getSign() == false)
		throw Form::NotSignedException();
	std::cout << "* BBRRRRRROOOOOUUUUUUUUUUUUUUUUUUUUUUUUUUU!!! *" << std::endl;
	std::cout << "<" << getTarget() << "> has been succewfully robotomise!" << std::endl;
}
