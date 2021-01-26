/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:27 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:17:57 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
	m_name(name),
	m_apcost(apcost),
	m_damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &ref)
{
	*this = ref;
}

AWeapon		&AWeapon::operator=(AWeapon const &ref)
{
	if (this != &ref)
	{
		m_name = ref.m_name;
		m_apcost = ref.m_apcost;
		m_damage = ref.m_damage;
	}
	return (*this);
}

AWeapon::~AWeapon()
{
}


std::string		AWeapon::getName() const
{
	return (m_name);
}

int				AWeapon::getAPCost() const
{
	return (m_apcost);
}

int				AWeapon::getDamage() const
{
	return (m_damage);
}
