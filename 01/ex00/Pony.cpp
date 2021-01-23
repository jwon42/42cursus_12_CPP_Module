/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:23:06 by jwon              #+#    #+#             */
/*   Updated: 2020/11/17 18:48:52 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->_name = name;
	std::cout << "Hey " << this->_name << "! Nice to meet you. :)" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Good bye! " << this->_name << "..." << std::endl;
}