/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:14:14 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 17:57:33 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &mat);
		virtual ~AMateria(void);
		AMateria&	operator=(const AMateria &mat);

		std::string const &		getType(void) const;
		unsigned int			getXP(void) const;
		virtual AMateria*		clone(void) const = 0;
		virtual void			use(ICharacter& target);

		void					setType(std::string const &type);
		void					setXP(int xp);
	private:
		unsigned int	_xp;
		std::string		_type;
};

#endif
