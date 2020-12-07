/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:57:52 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 15:55:21 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class	Bureaucrat;
class	Form
{
	public:
		Form(std::string name, int sgrade, int egrade, std::string target);
		Form(const Form &fo);
		virtual ~Form(void) {}
		Form&	operator=(const Form &fo);

		class	GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class	NotSignedException : public std::exception
		{
			virtual const char *what() const throw();
		};

		std::string		getName(void) const;
		std::string		getTarget(void) const;
		bool			getSign(void) const;
		int				getSgrade(void) const;
		int				getEgrade(void) const;
		void			setTarget(std::string target);

		void			beSigned(Bureaucrat bu);
		virtual void	execute(const Bureaucrat &bu) const = 0;
	private:
		std::string	const	_name;
		bool				_sign;
		int	const			_sgrade;
		int	const			_egrade;
		std::string			_target;
};

std::ostream&	operator<<(std::ostream& o, const Form &fo);

#endif
