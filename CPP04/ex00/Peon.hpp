/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:16:44 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 13:55:28 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(Peon &peon);
		virtual ~Peon(void);
		Peon&	operator=(const Peon &peon);

		void	getPolymorphed(void) const;
	private:
		std::string		_name;
};

#endif
