/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:40:18 by jwon              #+#    #+#             */
/*   Updated: 2021/01/23 01:09:53 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	m_name = "Anonymous Superman";
	m_hp = 100;
	m_max_hp = 100;
	m_energy = 120;
	m_max_energy = 120;
	m_level = 1;
	m_melee_damage = 60;
	m_range_damage = 20;
	m_armor_reduction = 5;
	std::cout << ">>> Hello Superman " << m_name << " <<<" << std::endl;
}

SuperTrap::SuperTrap(std::string name):
	ClapTrap(name),
	FragTrap(name),
	NinjaTrap(name)
{
	m_name = name;
	m_hp = 100;
	m_max_hp = 100;
	m_energy = 120;
	m_max_energy = 120;
	m_level = 1;
	m_melee_damage = 60;
	m_range_damage = 20;
	m_armor_reduction = 5;
	std::cout << ">>> Hello Superman " << m_name << " <<<" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & ref)
{
	*this = ref;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap & ref)
{
	if (this != &ref)
	{
		this->m_name = ref.m_name;
		this->m_hp = FragTrap::m_hp;
		this->m_max_hp = FragTrap::m_max_hp;
		this->m_energy = NinjaTrap::m_energy;
		this->m_max_energy = NinjaTrap::m_max_energy;
		this->m_level = 1;
		this->m_melee_damage = NinjaTrap::m_melee_damage;
		this->m_range_damage = FragTrap::m_range_damage;
		this->m_armor_reduction = FragTrap::m_armor_reduction;
	}
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << ">>> Goodbye Superman " << m_name << " <<<" << std::endl;
}

unsigned int    SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
	return (FragTrap::m_range_damage);
}

unsigned int    SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
	return (NinjaTrap::m_melee_damage);
}