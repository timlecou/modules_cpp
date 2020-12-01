/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:39:45 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 13:52:00 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class	ScavTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & scav);
		~ScavTrap();
		ScavTrap	&	operator=(ScavTrap const &scav);

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	displayStats(void) const;

		void	challengeNewcomer(void) const;
	private:
		int			_hit_pts;
		int			_max_hit_pts;
		int			_energy_pts;
		int			_max_energy_pts;
		int			_level;
		std::string	_name;
		int			_m_attack;
		int			_r_attack;
		int			_armor;
};

#endif
