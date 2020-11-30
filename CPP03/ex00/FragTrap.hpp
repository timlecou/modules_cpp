/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:00:01 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/30 22:50:08 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class	FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &trap);
		~FragTrap();
		FragTrap	&	operator=(FragTrap const &frag);

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		int			_hit_pts;
		int			_max_hit_pts;
		int			_energy_pts;
		int			_max_energy_pts;
		int			_level;
		int			_m_attack;
		int			_r_attack;
		int			_armor;
		std::string	_name;
};

#endif
