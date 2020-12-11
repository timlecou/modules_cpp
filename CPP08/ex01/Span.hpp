/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:45:50 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/11 22:38:46 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>

class	Span
{
	public:
		Span(void);
		Span(unsigned int);
		~Span(void);
		Span(const Span &sp);
		Span&	operator=(const Span &sp);

		class	ArrayIsFullException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class	TooSmallArrayException : public std::exception
		{
			virtual const char *what() const throw();
		};

		void			addNumber(int);
		void			addNumber(unsigned int, unsigned int);
		int				getSize(void) const;
		int				getNB(void) const;
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
	private:
		int			*_arr;
		int			_size;
		int			_nb;
};

#endif
