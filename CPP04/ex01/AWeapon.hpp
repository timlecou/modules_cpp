/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:30:08 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 13:53:40 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon &weap);
		virtual ~AWeapon(void);
		AWeapon&	operator=(const AWeapon &weap);
	
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		void			setName(std::string name);
		void			setAPCost(int apcost);
		void			setDamage(int damage);
		virtual void	attack(void) const = 0;
	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
};

#endif
