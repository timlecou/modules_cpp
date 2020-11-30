/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:59:27 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/29 11:30:54 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify(void) const
{
	std::stringstream str;

	str << "0x" << std::uppercase << std::hex << uintptr_t(this);
	return (str.str());
}
