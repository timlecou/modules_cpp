/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:01:24 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/29 18:45:37 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		std::string&	getType(void);
		void			setType(std::string type);
	private:
		std::string		_type;
};

#endif
