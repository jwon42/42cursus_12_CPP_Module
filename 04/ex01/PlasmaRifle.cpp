/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:45 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:21:04 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &ref):
	AWeapon(ref)
{
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &ref)
{
	if (this != &ref)
	{
		m_name = ref.m_name;
		m_apcost = ref.m_apcost;
		m_damage = ref.m_damage;
	}
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
