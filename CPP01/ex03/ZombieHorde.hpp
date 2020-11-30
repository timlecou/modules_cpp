/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:23:14 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 14:58:34 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(unsigned int n);
		~ZombieHorde();
		void	announce() const;
	private:
		int			_n;
		Zombie		*_zombs;
};

#endif
