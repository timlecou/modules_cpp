/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:01:43 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 10:40:42 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name, std::string type);
		void	advert() const;
	private:
		std::string	_name;
		std::string	_type;
};
