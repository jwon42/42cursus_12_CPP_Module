/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:58 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:21:26 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" <<std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &ref):
	Enemy(ref)
{
	std::cout << "Gaaah. Me want smash heads!" <<std::endl;
}

SuperMutant& SuperMutant::operator=(SuperMutant const &ref)
{
	if (this != &ref)
	{
		m_hp = ref.m_hp;
		m_type = ref.m_type;
	}
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int amount)
{
	amount = amount - 3;
	Enemy::takeDamage(amount);
}
