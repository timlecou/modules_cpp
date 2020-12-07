/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:28:46 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 11:20:07 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBURYCREATIONFORM_HPP
# define SHRUBBURYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class	Form;

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &sh);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &sh);

		void	execute(const Bureaucrat &bu) const;
};

#endif
