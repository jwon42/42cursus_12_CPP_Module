/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:37:08 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:36:29 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	m_name = "Anonymous";
	m_hp = 100;
	m_max_hp = 100;
	m_energy = 50;
	m_max_energy = 50;
	m_level = 1;
	m_melee_damage = 20;
	m_range_damage = 15;
	m_armor_reduction = 3;
	std::cout << ">>> Nice to see you again, " << m_name << " <<<" << std::endl;
}

ScavTrap::ScavTrap(std::string name):
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
	std::cout << ">>> Nice to see you again, " << m_name << " <<<" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ref)
{
    *this = ref;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & ref)
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

ScavTrap::~ScavTrap()
{
	std::cout << ">>> See you in the next life, " << m_name << "... <<<" << std::endl;
}

unsigned int	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << m_name
		<< " attacks " << target
		<< " at range, causing " << m_range_damage
		<< " points of damage!" << std::endl;
	return (m_range_damage);
}

unsigned int	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << m_name
		<< " attacks " << target
		<< " at melee, causing " << m_melee_damage
		<< " points of damage!" << std::endl;
	return (m_melee_damage);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	m_hp = m_hp - amount + m_armor_reduction;
	if (m_hp < 0)
		m_hp = 0;
	std::cout << m_name
		<< ": Eeeeeeh... (takes " << amount - m_armor_reduction
		<< " damage)" << std::endl;
	playerStatus();
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
	std::cout << m_name
		<< ": WoW, Bacchus is delicious."
		<< " (+ " << amount
		<< " HP)" << std::endl;
	playerStatus();
}

void	ScavTrap::playerStatus(void)
{
	std::cout << ">>> " << m_name << " -> "
		<< "HP : " << m_hp
		<< ", Energy : " << m_energy
		<< ", Armor : " << m_armor_reduction
		<< " <<<" << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	std::string challenge[5] =
	{
		"Drinking Mintchoco Milk(**)",
		"Drinking McCol(*)",
		"Eating Pupa Ramen(****)",
		"Eating Bulgogi(Congratulations!!!)",
		"Eating Fermented Skate(*****)"
	};
	std::cout << m_name << ", "
		<< "Can you do this? "
		<< challenge[rand() % 5] << std::endl;
}
