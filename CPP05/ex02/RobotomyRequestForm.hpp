/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:28:46 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 12:17:52 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <fstream>

class	Form;

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &ro);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &ro);

		void	execute(const Bureaucrat &bu) const;
};

#endif
