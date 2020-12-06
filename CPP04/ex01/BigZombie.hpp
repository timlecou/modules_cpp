/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigZombie.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:58:00 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:19:21 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGZOMBIE_HPP
# define BIGZOMBIE_HPP
# include "Enemy.hpp"

class	BigZombie : public Enemy
{
	public:
		BigZombie(void);
		BigZombie(BigZombie &zombie);
		virtual ~BigZombie(void);
		BigZombie&	operator=(const BigZombie &zombie);

		void	takeDamage(int);
};

#endif
