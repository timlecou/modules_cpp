/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:40:01 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 13:55:38 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer &sor);
		virtual ~Sorcerer();
		Sorcerer&	operator=(const Sorcerer &sor);

		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const &);
	private:
		std::string		_name;
		std::string		_title;
};

std::ostream &	operator<<(std::ostream & o, const Sorcerer &sor);

#endif
