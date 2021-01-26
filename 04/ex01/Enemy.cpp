/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:38 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:20:56 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type):
	m_hp(hp),
	m_type(type)
{
}

Enemy::Enemy(Enemy const &ref)
{
	*this = ref;
}

Enemy& Enemy::operator=(Enemy const &ref)
{
	if (this != &ref)
	{
		m_hp = ref.m_hp;
		m_type = ref.m_type;
	}
	return (*this);
}

Enemy::~Enemy()
{
}

std::string		Enemy::getType() const
{
	return (m_type);
}

int				Enemy::getHP() const
{
	return (m_hp);
}

void			Enemy::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	m_hp = m_hp - amount;
	if (m_hp < 0)
		m_hp = 0;
}
