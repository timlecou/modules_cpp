/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:04:59 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/29 14:57:47 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

std::string	Human::identify(void)
{
	return (this->cerv->identify());
}

Brain&	Human::getBrain()
{
	return (*cerv);
}
