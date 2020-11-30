/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:50:21 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 17:38:59 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();
		Fixed	&	operator=(Fixed const &fi);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_dot;
		static	const	int	_bitsNb = 8;
};

std::ostream &	operator<<(std::ostream & o, const Fixed &fi);

#endif
