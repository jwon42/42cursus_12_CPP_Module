/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:37:08 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:35:43 by jwon             ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
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

ScavTrap::ScavTrap(ScavTrap const & ref): ClapTrap(ref)
{
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
