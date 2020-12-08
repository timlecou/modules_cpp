/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:33:45 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 18:48:29 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const Convert &co)
{
	*this = co;
}

Convert&	Convert::operator=(const Convert &co)
{
	(void)co;
	return (*this);
}

char	Convert::getToChar(double arg)
{
	if (std::isnan(arg))
		throw Convert::NotANumberException();
	char c = static_cast<char>(arg);
	if (!std::isprint(c))
		throw Convert::NonPrintableException();
	return (c);
}

int		Convert::getToInt(double arg)
{
	if (std::isnan(arg) || std::isinf(arg))
		throw Convert::NotANumberException();
	if (arg > INT_MAX || arg < INT_MIN)
		throw Convert::NotANumberException();
	int	nb = static_cast<int>(arg);
	return (nb);
}

float	Convert::getToFloat(double arg)
{
	float	f = static_cast<float>(arg);
	return (f);
}

const char* Convert::NotANumberException::what(void) const throw()
{
	return ("Impossible");
}

const char* Convert::NonPrintableException::what(void) const throw()
{
	return ("Non displayable");
}

int		Convert::getPrec(char *arg)
{
	int		i = 0;

	for (int j = 0; arg[j] != '\0'; j++)
	{
		if (arg[j] == '.')
		{
			i++;
			while (arg[j + i] >= '0' && arg[j + i] <= '9')
				i++;
			return (i - 1);
		}
	}
	return (1);
}
