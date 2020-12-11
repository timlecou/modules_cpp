/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:05:23 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/11 20:28:34 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <deque>
# include <set>
# include <array>
# include <queue>

class	NotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return ("Integer not found");
	}
};

template<typename T>
typename T::iterator	easyfind(T arg, int nb)
{
	if (std::find(arg.begin(), arg.end(), nb) != arg.end())
		return (std::find(arg.begin(), arg.end(), nb));
	throw NotFoundException();
}

#endif
