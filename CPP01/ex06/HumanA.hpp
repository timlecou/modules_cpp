/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:06:37 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/29 18:54:48 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void		attack(void);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
