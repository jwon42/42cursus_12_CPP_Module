/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:37:08 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:36:05 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	m_name = "Anonymous";
	m_hp = 100;
	m_max_hp = 100;
	m_energy = 100;
	m_max_energy = 100;
	m_level = 1;
	m_melee_damage = 30;
	m_range_damage = 20;
	m_armor_reduction = 5;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	m_hp = 100;
	m_max_hp = 100;
	m_energy = 100;
	m_max_energy = 100;
	m_level = 1;
	m_melee_damage = 30;
	m_range_damage = 20;
	m_armor_reduction = 5;
}

FragTrap::FragTrap(FragTrap const & ref): ClapTrap(ref)
{
}

FragTrap&	FragTrap::operator=(FragTrap const & ref)
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

FragTrap::~FragTrap()
{
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	unsigned int	damage;
	std::string attack[5] =
	{
		"Magic Arrow",
		"Electric Spark",
		"Earth Shake",
		"Poison Spray",
		"Fire Bolt"
	};

	damage = rand() % 30 + 5;
	if (m_energy < 25)
	{
		std::cout << m_name << "!! Not enough energy..........." << std::endl;
		return (0);
	}
	else
	{
		std::cout << attack[rand() % 5] << " attack to "
			<< target << " with "
			<< damage << " points of damage!" << std::endl;
		m_energy -= 25;
		if (m_energy < 0)
			m_energy = 0;
	}
	playerStatus();
	return (damage);
}
