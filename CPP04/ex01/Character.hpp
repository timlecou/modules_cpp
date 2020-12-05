/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:33:05 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 14:06:32 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	public:
		Character(std::string const &name);
		Character(Character &Char);
		~Character(void);
		Character&	operator=(const Character &Char);

		void			recoverAP(void);
		void			equip(AWeapon *weap);
		void			attack(Enemy *en);

		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon*		getWeap(void) const;
		void			setAP(int);
	private:
		std::string		_name;
		int				_ap;
		AWeapon			*_weap;
};

std::ostream&	operator<<(std::ostream &o, const Character &Char);

#endif
