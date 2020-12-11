/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:53:19 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/11 21:49:27 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void): std::stack<T>() {};
		MutantStack(const MutantStack &mu): std::stack<T>(mu) {};
		virtual ~MutantStack(void) {};
		MutantStack&	operator=(const MutantStack &mu)
		{
			std::stack<T>::operator=(mu);
			return (*this);
		}

		typedef typename MutantStack::container_type::iterator	iterator;

		iterator	begin(void) {return std::stack<T>::c.begin();};
		
		iterator	end(void) {return std::stack<T>::c.end();};
		
};

#endif
