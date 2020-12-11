/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 14:10:07 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/11 16:47:17 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int		main(void)
{
	{
		std::cout << "---Normal-Tab---" << std::endl;
		try {
			Span sp = Span(5);

			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "---Same-Value-Tab---" << std::endl;
		try {
			Span sp = Span(5);

			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "---Empty-Tab---" << std::endl;
		try {
			Span sp = Span(0);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "---Negative-Tab---" << std::endl;
		try {
			Span sp = Span(5);

			sp.addNumber(-5);
			sp.addNumber(3);
			sp.addNumber(-17);
			sp.addNumber(7);
			sp.addNumber(-11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "---Very-Big-Tab---" << std::endl;
		try {
			Span sp = Span(10001);

			sp.addNumber(1, 10000);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "---Very-Very-Big-Tab---" << std::endl;
		try {
			Span sp = Span(1000001);

			sp.addNumber(1, 1000000);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "---Ultra-Big-Tab---" << std::endl;
		try {
			Span sp = Span(2500001);

			sp.addNumber(1, 2500000);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
