/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:33:34 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/07 16:57:30 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh): Form("Shrubbery Creation", 145, 137, sh.getTarget())
{
	*this = sh;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sh)
{
	setTarget(sh.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::execute (const Bureaucrat &bu) const
{
	if (getEgrade() < bu.getGrade())
		throw Form::GradeTooLowException();
	if (getSign() == false)
		throw Form::NotSignedException();
	std::string		file = getTarget() + "_shrubbery";
	std::ofstream	ofs;
	ofs.open(file, std::ios::out);
	if (ofs.bad())
	{
		std::cout << "couldn't create file" << std::endl;
		return ;
	}
	ofs << "                                                         .\n"
				 "                                              .         ;  \n"
				 "                 .              .              ;%     ;;   \n"
				 "                   ,           ,                :;%  %;   \n"
				 "                    :         ;                   :;%;'     .,   \n"
				 "           ,.        %;     %;            ;        %;'    ,;\n"
				 "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				 "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
				 "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
				 "                `%;.     ;%;     %;'         `;%%;.%;'\n"
				 "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
				 "                    `:%;.  :;bd%;          %;@%;'\n"
				 "                      `@%:.  :;%.         ;@@%;'   \n"
				 "                        `@%.  `;@%.      ;@@%;         \n"
				 "                          `@%%. `@%%    ;@@%;        \n"
				 "                            ;@%. :@%%  %@@%;       \n"
				 "                              %@bd%%%bd%%:;     \n"
				 "                                #@%%%%%:;;\n"
				 "                                %@@%%%::;\n"
				 "                                %@@@%(o);  . '         \n"
				 "                                %@@@o%;:(.,'         \n"
				 "                            `.. %@@@o%::;         \n"
				 "                               `)@@@o%::;         \n"
				 "                                %@@(o)::;        \n"
				 "                               .%@@@@%::;         \n"
				 "                               ;%@@@@%::;.          \n"
				 "                              ;%@@@@%%:;;;. \n"
				 "                          ...;%@@@@@%%:;;;;,..          " << std::endl;
	ofs.close();
}
