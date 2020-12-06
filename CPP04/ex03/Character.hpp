/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:50:43 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:37:15 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
		Character(std::string const &name);
		Character(const Character &c);
		~Character(void);
		Character&		operator=(const Character &c);

		std::string const&	getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

		unsigned int		getCount(void) const;
	private:
		std::string			_name;
		AMateria			*_inv[4];
		unsigned int		_count;
};

#endif
