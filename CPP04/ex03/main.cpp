/* ************************************************************************** */
/*																									 */
/*																		  :::		::::::::	*/
/*	main.cpp														 :+:		:+:	 :+:	*/
/*																	 +:+ +:+			+:+	  */
/*	By: timlecou <timlecou@student.42.fr>			 +#+  +:+		 +#+		  */
/*																+#+#+#+#+#+	+#+			  */
/*	Created: 2020/12/05 18:48:21 by timlecou			 #+#	 #+#				 */
/*	Updated: 2020/12/05 19:12:58 by timlecou			###	########.fr		 */
/*																									 */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void fct(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
//	delete tmp;
//	tmp = NULL;
	tmp = src->createMateria("cure");
	moi->equip(tmp);
//	delete tmp;
//	tmp = NULL;
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(-1, *bob);
	moi->use(3, *bob);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
//	delete tmp;
//	tmp = NULL;
	bob->use(0, *moi);
	delete bob;
	delete moi;
	delete src;
}

int fct2(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
//	delete tmp;
//	tmp = NULL;
	tmp = src->createMateria("cure");
	moi->equip(tmp);
//	delete tmp;
//	tmp = NULL;
	ICharacter* bob = new Character("bob");
	moi->use(0, *moi);
	moi->use(1, *moi);
	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
	return (0);
}

int main()
{
	fct();
	std::cout << "----------------------" << std::endl;
	fct2();
	while (1);
	return (0);
}
