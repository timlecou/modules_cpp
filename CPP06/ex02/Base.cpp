/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:49:49 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 22:05:15 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void) {}

Base::~Base(void) {}

Base::Base(const Base &ba)
{
	(void)ba;
}

Base&	Base::operator=(const Base &ba)
{
	(void)ba;
	return (*this);
}
