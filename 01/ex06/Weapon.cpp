/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 17:29:48 by jwon              #+#    #+#             */
/*   Updated: 2020/12/27 17:31:14 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

std::string const	&Weapon::getType() const
{
	return (_type);
}

void				Weapon::setType(std::string const type)
{
	_type = type;
}

Weapon::~Weapon()
{
}