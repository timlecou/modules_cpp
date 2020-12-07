/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:10:01 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 18:10:19 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class	Form;
class	Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bu);
		virtual ~Bureaucrat(void) {}
		Bureaucrat&		operator=(const Bureaucrat &bu);

		class	GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

		void		decGrade(void);
		void		incGrade(void);
		std::string	getName(void) const;
		int			getGrade(void) const;

		void		signForm(Form &fo);
	private:
		std::string		_name;
		int				_grade;
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat &bu);

#endif
