/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:20:03 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 16:57:59 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int		main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed		c(42.42f);
	Fixed		d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a << " as integer" << std::endl;
	std::cout << "b is " << b << " as integer" << std::endl;
	std::cout << "c is " << c << " as integer" << std::endl;
	std::cout << "d is " << d << " as integer" << std::endl;

	return (0);
}
