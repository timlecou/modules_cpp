/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:20:11 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 15:51:29 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sgrade, int egrade, std::string target): _name(name), _sgrade(sgrade), _egrade(egrade), _target(target)
{
	if (sgrade < 1 || egrade < 1)
		throw Form::GradeTooHighException();
	if (sgrade > 150 || egrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &fo): _name(fo._name), _sign(fo._sign), _sgrade(fo._sgrade), _egrade(fo._egrade), _target(fo._target)
{
	*this = fo;
}

Form&	Form::operator=(const Form &fo)
{
	this->_sign = fo.getSign();
	this->_target = fo.getTarget();
	return (*this);
}

std::string 		Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSign(void) const
{
	return (this->_sign);
}

int			Form::getSgrade(void) const
{
	return (this->_sgrade);
}

int			Form::getEgrade(void) const
{
	return (this->_egrade);
}

std::ostream&	operator<<(std::ostream& o, const Form &fo)
{
	o << "-----------FORM-----------";
	o << "Name: " << fo.getName() << std::endl;
	o << "State: ";
	if (fo.getSign() == true)
		o << "signed" << std::endl;
	else
		o << "unsigned" << std::endl;
	o << "Grade to sign: " << fo.getSgrade() << std::endl;
	o << "Grade to execute: " << fo.getEgrade() << std::endl;
	return (o);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat's grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat's grade is too low");
}

const char *Form::NotSignedException::what() const throw()
{
	return ("Form isn't signed yet");
}

void	Form::beSigned(Bureaucrat bu)
{
	if (bu.getGrade() <= this->_sgrade)
	{
		bu.signForm(*this);
		this->_sign = true;
	}
	else
	{
		std::cout << "<" << bu.getName() << "> can't sign <" << this->getName() << "> because its grade is too low" << std::endl;
		throw Form::GradeTooLowException();
	}
}

std::string	Form::getTarget(void) const
{
	return (this->_target);
}

void	Form::setTarget(std::string target)
{
	this->_target = target;
}
