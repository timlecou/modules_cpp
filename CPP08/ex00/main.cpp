/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:31:23 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/11 22:37:21 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	{
		std::cout << "--------------LIST-----------------" << std::endl;
		std::list<int>	li;
		li.push_back(22);
		li.push_back(12);
		li.push_back(2);
		li.push_back(42);
		li.push_back(32);
		li.push_back(52);
		try {
			std::cout << *easyfind(li, 42) << std::endl;
			std::cout << *easyfind(li, 40) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "-------------VECTOR----------------" << std::endl;
		std::vector<int>	li;
		li.push_back(22);
		li.push_back(12);
		li.push_back(2);
		li.push_back(42);
		li.push_back(32);
		li.push_back(52);
		try {
			std::cout << *easyfind(li, 42) << std::endl;
			std::cout << *easyfind(li, 40) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "--------------SET------------------" << std::endl;
		std::set<int>	li;
		li.insert(22);
		li.insert(12);
		li.insert(2);
		li.insert(42);
		li.insert(32);
		li.insert(52);
		try {
			std::cout << *easyfind(li, 42) << std::endl;
			std::cout << *easyfind(li, 40) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "--------------DEQUE----------------" << std::endl;
		std::deque<int>	li;
		li.push_back(22);
		li.push_back(12);
		li.push_back(2);
		li.push_back(42);
		li.push_back(32);
		li.push_back(52);
		try {
			std::cout << *easyfind(li, 42) << std::endl;
			std::cout << *easyfind(li, 40) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
