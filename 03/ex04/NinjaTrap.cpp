/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:09:22 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:41:48 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	m_hp = 60;
	m_max_hp = 60;
	m_energy = 120;
	m_max_energy = 120;
	m_level = 1;
	m_melee_damage = 60;
	m_range_damage = 50;
	m_armor_reduction = 0;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	m_hp = 60;
	m_max_hp = 60;
	m_energy = 120;
	m_max_energy = 120;
	m_level = 1;
	m_melee_damage = 60;
	m_range_damage = 50;
	m_armor_reduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ref)
{
	*this = ref;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const & ref)
{
	if (this != &ref)
	{
		this->m_name = ref.m_name;
		this->m_hp = ref.m_hp;
		this->m_max_hp = ref.m_max_hp;
		this->m_energy = ref.m_energy;
		this->m_max_energy = ref.m_max_energy;
		this->m_level = ref.m_level;
		this->m_melee_damage = ref.m_melee_damage;
		this->m_range_damage = ref.m_range_damage;
		this->m_armor_reduction = ref.m_armor_reduction;
	}
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
}

void   NinjaTrap::ninjaShoebox(const FragTrap & ref)
{
	std::cout << m_name << " attacks "
		<< ref.m_name << " with Mintchoco!" << std::endl;
}

void   NinjaTrap::ninjaShoebox(const ScavTrap & ref)
{
	std::cout << m_name << " attacks "
		<< ref.m_name << " with Pupa!" << std::endl;
}

void   NinjaTrap::ninjaShoebox(const NinjaTrap & ref)
{
	std::cout << m_name << " attacks "
		<< ref.m_name << " with Fermented Skate!" << std::endl;
}

void   NinjaTrap::ninjaShoebox(const ClapTrap & ref)
{
	std::cout << m_name << " attacks "
		<< ref.m_name << " with McCol!" << std::endl;
}