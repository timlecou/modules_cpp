/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DesertEagle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:50:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:15:15 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DESERTEAGLE_HPP
# define DESERTEAGLE_HPP
# include "AWeapon.hpp"

class	DesertEagle : public AWeapon
{
	public:
		DesertEagle(void);
		DesertEagle(DesertEagle &desert);
		virtual ~DesertEagle(void);
		DesertEagle&	operator=(const DesertEagle &desert);

		void		attack(void) const;
	private:
};

#endif
