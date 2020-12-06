/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:57:52 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 16:02:13 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class	Form
{
	public:
		Form(std::string name, int sgrade, int egrade);
		Form(const Form &fo);
		virtual ~Form(void) {}
		Form&	operator=(const Form &fo);

		
	private:
		std::string	const	_name;
		bool				_sign;
		int					_sgrade;
		int					_egrade;
};

#endif
