/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:05:09 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 15:13:43 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*str2 = &str;
	std::string		&str3 = *str2;

	std::cout << "pointer   : " << *str2 << std::endl;
	std::cout << "reference : " << str3 << std::endl;
	return (0);
}
