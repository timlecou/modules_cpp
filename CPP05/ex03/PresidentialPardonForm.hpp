/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:28:46 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 12:27:52 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <fstream>

class	Form;

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &pre);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &pre);

		void	execute(const Bureaucrat &bu) const;
};

#endif
