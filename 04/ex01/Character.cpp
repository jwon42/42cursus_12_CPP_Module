/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:33 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 23:02:43 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name):
	m_name(name),
	m_ap(40),
	m_weapon(0)
{
}

Character::Character(Character const &ref)
{
	*this = ref;
}

Character& Character::operator=(Character const &ref)
{
	if (this != &ref)
	{
		m_name = ref.m_name;
		m_ap = ref.m_ap;
		m_weapon = ref.m_weapon;
	}
	return (*this);
}

Character::~Character()
{
}

void		Character::recoverAP()
{
	m_ap = m_ap + 10;
	if (m_ap > 40)
		m_ap = 40;
}

void		Character::equip(AWeapon *weapon)
{
	m_weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (m_weapon && enemy && m_ap >= m_weapon->getAPCost())
	{
		std::cout << m_name << " attacks "
			<< enemy->getType() << " with a "
			<< m_weapon->getName() << std::endl;
		m_weapon->attack();
		enemy->takeDamage(m_weapon->getDamage());
		m_ap = m_ap - m_weapon->getAPCost();
		if (m_ap < 0)
			m_ap = 0;
		if (enemy->getHP() <= 0)
			delete enemy;
	}
	else
	{
		if (!m_weapon)
			std::cout << "No weapon equipped!" << std::endl;
		else if (m_ap < m_weapon->getAPCost())
			std::cout << "Not enough AP to attack!" << std::endl;
		else if (!enemy)
			std::cout << "No enemy to attack!" << std::endl;
	}
}

std::string	Character::getName() const
{
	return (m_name);
}

int			Character::getAP() const
{
	return (m_ap);
}

AWeapon		*Character::getWeapon() const
{
	return (m_weapon);
}

std::ostream	&operator<<(std::ostream &os, const Character &ref)
{
	if (ref.getWeapon())
		os << ref.getName() << " has "
			<< ref.getAP() << " AP and wields a "
			<< ref.getWeapon()->getName() << std::endl;
	else
		os << ref.getName() << " has "
			<< ref.getAP() << " AP and is unarmed" << std::endl;
	return (os);
}
