/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:54:28 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 12:08:41 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class	ISquad
{
	public:
		virtual	~ISquad(void) {}
		virtual	int	getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int) const = 0;
		virtual	int	push(ISpaceMarine*) = 0;
};

#endif
