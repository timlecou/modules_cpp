/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:16:44 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:49:48 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include "Victim.hpp"

class	Zombie : public Victim
{
	public:
		Zombie(std::string name);
		Zombie(Zombie &zombie);
		virtual ~Zombie(void);
		Zombie&	operator=(const Zombie &zombie);

		void	getPolymorphed(void) const;
	private:
		std::string		_name;
};

#endif
