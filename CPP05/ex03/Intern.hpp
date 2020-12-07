/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:29:43 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 17:14:38 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern &in);
		~Intern(void);
		Intern&		operator=(const Intern &in);

		class	TypeNotFoundException : public std::exception
		{
			virtual const char *what() const throw();
		};

		Form	*makeForm(std::string type, std::string target);
	private:
		bool		isknown(std::string);
		Form		*ShrubberyCreate(std::string name);
		Form		*RobotomyCreate(std::string name);
		Form		*PresidentCreate(std::string name);
};

#endif
