/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:33:45 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/09 18:44:22 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	fct(T c)
{
	std::cout << c;
}

template<typename T>
void	fct2(T c)
{
	c += 1;
	std::cout << c;
}


int		main(void)
{
	char	str[9] = "abcdefg\0";
	int		nb[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string	str2[3] = {"salut ", "ca ", "va ?"};

	std::cout << "----------Test-with-print-function-----------" << std::endl;
	std::cout << std::endl << "Test with int array: ";
	iter(nb, 7, fct);
	std::cout << std::endl;
	std::cout << "Test with char array: ";
	iter(str, 9, fct);
	std::cout << std::endl;
	std::cout << "Test with string array: ";
	iter(str2, 3, fct);
	std::cout << std::endl << std::endl;
	std::cout << "----------Test-with-add-function-----------" << std::endl;
	std::cout << std::endl << "Test with int array: ";
	iter(nb, 7, fct2);
	std::cout << std::endl;
	std::cout << "Test with char array: ";
	iter(str, 9, fct2);
	std::cout << std::endl;
	std::cout << "Test with string array: ";
	iter(str2, 3, fct2);
	std::cout << std::endl;

	return (0);
}
