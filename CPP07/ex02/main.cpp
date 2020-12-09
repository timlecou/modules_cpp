/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:29:50 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/09 18:31:37 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	std::cout << "-------------TESTS-------------" << std::endl;
	try {
		std::cout << "Copy constructor tests: " << std::endl;;
		Array<int> a(5);
		Array<int> b = a;
		std::cout << "content of a: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i];
		std::cout << std::endl << "content of b: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << b[i];
		std::cout << std::endl;
		a[0] = 5;
		std::cout << "content of a: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i];
		std::cout << std::endl << "content of b: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << b[i];
		std::cout << std::endl;
	}
	catch (std::exception &e) {}
	try {
		std::cout << "Assignation operator tests: " << std::endl;;
		Array<int> a(5);
		Array<int> b(a);
		std::cout << "content of a: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i];
		std::cout << std::endl << "content of b: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << b[i];
		std::cout << std::endl;
		a[0] = 5;
		std::cout << "content of a: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i];
		std::cout << std::endl << "content of b: ";
		for (int i = 0; i < a.size(); i++)
			std::cout << b[i];
		std::cout << std::endl;
	}
	catch (std::exception &e) {}
	std::cout << "-------------ERROR-------------" << std::endl;
	try {
		Array<std::string> a;
		std::cout << a[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Array<std::string> a(6);
		std::cout << a[-12] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------STRING-------------" << std::endl;
	try {
		Array<std::string> a(6);
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------CHAR-------------" << std::endl;
	try {
		Array<char> a(6);
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------INT--------------" << std::endl;
	try {
		Array<int> a(6);
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------DOUBLE------------" << std::endl;
	try {
		Array<double> a(6);
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------FLOAT------------" << std::endl;
	try {
		Array<float> a(6);
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------LONG-------------" << std::endl;
	try {
		Array<long> a(6);
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
