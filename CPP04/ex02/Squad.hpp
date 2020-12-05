/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:43:06 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 12:07:59 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class	Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad &sq);
		virtual ~Squad(void);
		Squad&		operator=(const Squad &sq);

		int				getCount(void) const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);

		void			clear(void);
	private:
		int				_count;
		ISpaceMarine	**_units;
};

#endif
