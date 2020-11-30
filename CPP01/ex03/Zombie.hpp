/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:23:14 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 15:01:27 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie
{
	public:
		Zombie();
		void	announce() const;
	private:
		std::string	_name;
		std::string	_type;
};
