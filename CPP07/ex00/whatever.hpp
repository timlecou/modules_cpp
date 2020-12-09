/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:22:35 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/09 15:38:08 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	c = a;
	a = b;
	b = c;
}

template <typename T1>
const T1	&min(const T1 &a, const T1 &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T2>
const T2	&max(const T2 &a, const T2 &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
