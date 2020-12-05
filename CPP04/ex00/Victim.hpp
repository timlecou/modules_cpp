/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:47:02 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 13:55:58 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class	Victim
{
	public:
		Victim(std::string name);
		Victim(Victim &vic);
		virtual ~Victim(void);
		Victim&	operator=(const Victim &vic);

		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;
	private:
		std::string		_name;
};

std::ostream&	operator<<(std::ostream &o, const Victim &vic);

#endif
