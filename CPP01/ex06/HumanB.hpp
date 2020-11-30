/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:47:49 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/29 18:55:49 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void		attack(void);
		void		setWeapon(Weapon &weapon);
	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif
