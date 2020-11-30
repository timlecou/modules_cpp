/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:46:37 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 09:01:03 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	
	delete panthere;
}
