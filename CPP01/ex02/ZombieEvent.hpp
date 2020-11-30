/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:09:17 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/28 13:55:11 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class	ZombieEvent
{
	public:
		ZombieEvent(std::string type);
		~ZombieEvent();
		Zombie	*newZombie(std::string name);
		void	randomChump() const;
	private:
		std::string	_setZombieType;
};
