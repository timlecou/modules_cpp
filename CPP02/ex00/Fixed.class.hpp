/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:50:21 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 16:25:16 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&	operator=(Fixed const &fi);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_dot;
		static	const	int	_bitsNb = 8;
};

#endif
