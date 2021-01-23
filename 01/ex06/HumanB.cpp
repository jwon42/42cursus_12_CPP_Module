/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 17:36:48 by jwon              #+#    #+#             */
/*   Updated: 2020/12/27 17:43:40 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
}

void	HumanB::setWeapon(Weapon const &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack() const
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}