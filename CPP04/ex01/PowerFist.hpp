/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:50:54 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 13:54:34 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist &power);
		virtual ~PowerFist(void);
		PowerFist&	operator=(const PowerFist &power);

		void		attack(void) const;
	private:
};

#endif
