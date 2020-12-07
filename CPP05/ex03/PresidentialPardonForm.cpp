/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:33:34 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 16:57:56 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential Pardon",25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pre): Form("Presidential Pardon", 25, 5, pre.getTarget())
{
	*this = pre;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &pre)
{
	setTarget(pre.getTarget());
	return (*this);
}

void	PresidentialPardonForm::execute (const Bureaucrat &bu) const
{
	if (getEgrade() < bu.getGrade())
		throw Form::GradeTooLowException();
	if (getSign() == false)
		throw Form::NotSignedException();
	std::cout << "<" << getTarget() << "> has been forgiven by Zafod Beeblebox" << std::endl;
}
