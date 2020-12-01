/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:29:31 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 14:34:23 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap & clap);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap	&	operator=(const ClapTrap & clap);

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	displayStats(void) const;
		std::string	_name;
	protected:
		int			_hit_pts;
		int			_max_hit_pts;
		int			_energy_pts;
		int			_max_energy_pts;
		int			_level;
		int			_m_attack;
		int			_r_attack;
		int			_armor;
};

#endif
