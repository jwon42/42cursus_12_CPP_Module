/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:16:06 by jwon              #+#    #+#             */
/*   Updated: 2020/11/28 13:06:40 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_type = std::string();
	this->_name = std::string();
}

Zombie::Zombie(std::string type, std::string name)
{
	this->_type = type;
	this->_name = name;
}

void	Zombie::setMember(std::string type, std::string name)
{
	this->_type = type;
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
}