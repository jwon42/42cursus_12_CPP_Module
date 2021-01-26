/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:50 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:21:15 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &ref):
	AWeapon(ref)
{
}

PowerFist& PowerFist::operator=(PowerFist const &ref)
{
	if (this != &ref)
	{
		m_name = ref.m_name;
		m_apcost = ref.m_apcost;
		m_damage = ref.m_damage;
	}
	return (*this);
}
PowerFist::~PowerFist()
{
}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
