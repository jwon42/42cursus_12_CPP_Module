/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:15:10 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:35:15 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	m_name = "Anonymous";
	std::cout << ">>> Clap cLap clAp claP TRAP.. " << m_name << "!!! <<<" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	m_name(name)
{
	std::cout << ">>> Clap cLap clAp claP TRAP.. " << m_name << "!!! <<<" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ref)
{
	*this = ref;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & ref)
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

ClapTrap::~ClapTrap()
{
	std::cout << ">>> Clap cLap clAp claP TRAP?? Bye " << m_name << " <<<" << std::endl;
}

unsigned int	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << m_name
		<< " attacks " << target
		<< " at range, causing " << m_range_damage
		<< " points of damage!" << std::endl;
	return (m_range_damage);
}

unsigned int	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << m_name
		<< " attacks " << target
		<< " at melee, causing " << m_melee_damage
		<< " points of damage!" << std::endl;
	return (m_melee_damage);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	m_hp = m_hp - amount + m_armor_reduction;
	if (m_hp < 0)
		m_hp = 0;
	std::cout << m_name
		<< ": Aaaaaah... (takes " << amount - m_armor_reduction
		<< " damage)" << std::endl;
	playerStatus();
}

void	ClapTrap::beRepaired(unsigned int amount)
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

void	ClapTrap::playerStatus(void)
{
	std::cout << ">>> " << m_name << " -> "
		<< "HP : " << m_hp
		<< ", Energy : " << m_energy
		<< ", Armor : " << m_armor_reduction
		<< " <<<" << std::endl;
}
