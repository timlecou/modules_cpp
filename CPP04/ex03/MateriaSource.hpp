/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:29:08 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/05 18:46:11 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include <iostream>

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource & mat);
		~MateriaSource(void);
		MateriaSource&	operator=(const MateriaSource& mat);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

		bool		isknown(std::string const & type) const;
	private:
		AMateria		*_copy[4];
		unsigned int	_count;
};

#endif
