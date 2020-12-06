/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:18:43 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 15:54:49 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bu)
{
	*this = bu;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &bu)
{
	this->_name = bu.getName();
	this->_grade = bu.getGrade();
	return (*this);
}

void	Bureaucrat::decGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::incGrade(void)
{
	if (this->_grade > 1)
		this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: grade to low !";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: grade to high !";
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat &bu)
{
	o << "<" << bu.getName() << ">, bureaucrat grade <" << bu.getGrade() << ">";
	return (o);
}
