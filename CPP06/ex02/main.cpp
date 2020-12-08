/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:57:57 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 22:19:16 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "[A] (from pointer identification)" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "[B] (from pointer identification)" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "[C] (from pointer identification)" << std::endl;
}

void	identify_from_reference(Base &p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "[A] (from reference identification)" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "[B] (from reference identification)" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "[C] (from reference identification)" << std::endl;
	}
	catch (std::exception &e) {}
}

int		main(void)
{
	Base	*a = new A();
	Base	*b = new B();
	Base	*c = new C();

	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	std::cout << std::endl;
	identify_from_reference(*c);
	identify_from_reference(*b);
	identify_from_reference(*a);

	delete a;
	delete b;
	delete c;
	return (0);
}
