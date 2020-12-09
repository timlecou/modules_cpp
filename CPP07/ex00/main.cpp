/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:30:37 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/09 18:49:59 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "-----------Test-with-int--------------" << std::endl << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>( a, b ) << std::endl << std::endl;

	std::cout << "-----------Test-with-string--------------" << std::endl << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min<std::string>( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max<std::string>( c, d ) << std::endl << std::endl;;

	std::cout << "min( 12, 12 ) = " << ::min<int>( 12, 12 ) << std::endl;
	std::cout << "max( 12, 12 ) = " << ::max<int>( 12, 12 ) << std::endl << std::endl;

	std::cout << "-----------Test-with-double--------------" << std::endl << std::endl;
	double c1 = 42.41;
	double d1 = 42.42;

	::swap(c1, d1);
	std::cout << "c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "min( c, d ) = " << ::min<double>( c1, d1 ) << std::endl;
	std::cout << "max( c, d ) = " << ::max<double>( c1, d1 ) << std::endl << std::endl;

	std::cout << "-----------Test-with-float--------------" << std::endl << std::endl;
	float c2 = 42.41;
	float d2 = 42.42;

	::swap(c2, d2);
	std::cout << "c = " << c2 << ", d = " << d2 << std::endl;
	std::cout << "min( c, d ) = " << ::min<float>( c2, d2 ) << std::endl;
	std::cout << "max( c, d ) = " << ::max<float>( c2, d2 ) << std::endl << std::endl;

	return (0);
}
