/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:00:01 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/01 14:33:15 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(const NinjaTrap &trap);
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap	&	operator=(NinjaTrap const &ninja);

		void	ninjaShoebox(ClapTrap &clap);
		void	ninjaShoebox(FragTrap &frag);
		void	ninjaShoebox(ScavTrap &scav);
		void	ninjaShoebox(NinjaTrap &ninja);
};

#endif
