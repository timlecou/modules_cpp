/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:03:07 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/06 13:22:18 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "DesertEagle.hpp"
#include "BigZombie.hpp"

int		main(void)
{
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* d = new BigZombie();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* de = new DesertEagle();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	std::cout << *moi;
	moi->equip(de);
	std::cout << *moi;

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(d);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	moi->equip(pf);
	moi->recoverAP();
	moi->attack(c);
	moi->attack(c);
	moi->attack(c);
	moi->attack(c);
	moi->attack(c);
	std::cout << *moi;
	delete pr;
	delete pf;
	delete moi;
	return (0);
}
