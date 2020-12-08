/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:31:44 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 22:14:49 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <cmath>
# include <iomanip>
# include <limits.h>

class	Convert
{
	public:
		Convert(void) {}
		Convert(const Convert &co);
		~Convert(void) {}
		Convert&	operator=(const Convert &co);

		class	NotANumberException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class	NonPrintableException : public std::exception
		{
			virtual const char *what() const throw();
		};

		static char		getToChar(double arg);
		static int		getToInt(double arg);
		static float	getToFloat(double arg);
		static int		getPrec(char *arg);
};

#endif
