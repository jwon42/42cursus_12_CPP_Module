/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:37:08 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:36:23 by jwon             ###   ########.fr       */
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
	std::cout << ">>> Hello " << m_name << " <<<" << std::endl;
}

FragTrap::FragTrap(std::string name):
	m_name(name),
	m_hp(100),
	m_max_hp(100),
	m_energy(100),
	m_max_energy(100),
	m_level(1),
	m_melee_damage(30),
	m_range_damage(20),
	m_armor_reduction(5)
{
	std::cout << ">>> Hello " << m_name << " <<<" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ref)
{
    *this = ref;
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
	std::cout << ">>> Goodbye " << m_name << " <<<" << std::endl;
}

unsigned int	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << m_name
		<< " attacks " << target
		<< " at range, causing " << m_range_damage
		<< " points of damage!" << std::endl;
	return (m_range_damage);
}

unsigned int	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << m_name
		<< " attacks " << target
		<< " at melee, causing " << m_melee_damage
		<< " points of damage!" << std::endl;
	return (m_melee_damage);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	m_hp = m_hp - amount + m_armor_reduction;
	if (m_hp < 0)
		m_hp = 0;
	std::cout << m_name
		<< ": Aaaaaah... (takes " << amount - m_armor_reduction
		<< " damage)" << std::endl;
	playerStatus();
}

void	FragTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
	std::cout << m_name
		<< ": WoW, McCol is delicious."
		<< " (+ " << amount
		<< " HP)" << std::endl;
	playerStatus();
}

void	FragTrap::playerStatus(void)
{
	std::cout << ">>> " << m_name << " -> "
		<< "HP : " << m_hp
		<< ", Energy : " << m_energy
		<< ", Armor : " << m_armor_reduction
		<< " <<<" << std::endl;
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
