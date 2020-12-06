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


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* moi = new Character("moi");
    
    AMateria* tmp = NULL;
    AMateria* tmp2 = NULL;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    std::cout << "[+] ICE = " << tmp->getType() << std::endl;
    
    tmp2 = src->createMateria("cure");
    moi->equip(tmp2);
    std::cout << "[+] CURE = " << tmp2->getType() << std::endl;
    
    ICharacter* bob = new Character("bob");
    
    moi->use(0, *bob);
    moi->use(1, *bob);
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;

    
    moi->use(0, *bob);
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;

    delete bob;
    delete moi;
    delete src;
    
    return 0;
}
