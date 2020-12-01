/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:14:04 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 17:50:20 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"

class	SuperTrap: virtual public FragTrap, virtual public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string const name);
		SuperTrap(SuperTrap & super);
		~SuperTrap(void);
		SuperTrap &	operator=(const SuperTrap & super);

		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;
};

#endif
