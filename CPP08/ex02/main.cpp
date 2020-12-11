/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 21:18:42 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/11 22:29:42 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int		main(void)
{
	std::cout << "---------------Subject-Main------------------" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
	    std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-----------------My-Main--------------------" << std::endl;

	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "----------------INT--------------" << std::endl;
		MutantStack<int>	mu;

		mu.push(21);
		mu.push(42);
		mu.push(32);
		mu.push(2);
		mu.push(1);
		mu.push(45);
		mu.push(216);

		MutantStack<int>	mu1(mu);
		MutantStack<int>::iterator it = mu1.begin();
		MutantStack<int>::iterator ite = mu1.end();

		++it;
		--it;
		std::cout << std::endl;
		std::cout << "size: " << mu1.size() << std::endl;
		std::cout << "top: " << mu1.top() << std::endl;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			++it;
			if (it != ite)
				std::cout << " - ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "----------------CHAR-------------" << std::endl;
		MutantStack<char>	mu;

		mu.push('f');
		mu.push('t');
		mu.push('r');
		mu.push('\'');
		mu.push('d');

		MutantStack<char>	mu1;
		mu1 = mu;
		MutantStack<char>::iterator it = mu1.begin();
		MutantStack<char>::iterator ite = mu1.end();

		++it;
		--it;
		std::cout << std::endl;
		std::cout << "size: " << mu1.size() << std::endl;
		std::cout << "top: " << mu1.top() << std::endl;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			++it;
			if (it != ite)
				std::cout << " - ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "----------------STRING--------------" << std::endl;
		MutantStack<std::string>	mu;

		mu.push("salut");
		mu.push(" ");
		mu.push("je");
		mu.push(" ");
		mu.push("suis");
		mu.push(" ");
		mu.push("timlecou");
		mu.push("!");

		MutantStack<std::string>::iterator it = mu.begin();
		MutantStack<std::string>::iterator ite = mu.end();

		++it;
		--it;
		std::cout << std::endl;
		std::cout << "size: " << mu.size() << std::endl;
		std::cout << "top: " << mu.top() << std::endl;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			++it;
			if (it != ite)
				std::cout << " - ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "--------------FLOAT--------------" << std::endl;
		MutantStack<float>	mu;

		mu.push(21.21);
		mu.push(42.1234);
		mu.push(32.34);
		mu.push(821);
		mu.push(2);
		mu.push(821.56);
		mu.push(324);
		mu.push(1.0);
		mu.push(45);
		mu.push(216.216);

		MutantStack<float>::iterator it = mu.begin();
		MutantStack<float>::iterator ite = mu.end();

		++it;
		--it;
		std::cout << std::endl;
		std::cout << "size: " << mu.size() << std::endl;
		std::cout << "top: " << mu.top() << std::endl;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			++it;
			if (it != ite)
				std::cout << " - ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
