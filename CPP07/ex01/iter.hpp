/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:01:08 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/09 15:18:31 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(T *arr, int size, void fct(T))
{
	if (arr == NULL)
		return ;
	for (int i = 0; i < size; i++)
		fct(arr[i]);
}

#endif
