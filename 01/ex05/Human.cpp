/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:53:26 by jwon              #+#    #+#             */
/*   Updated: 2020/12/27 16:53:54 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain	&Human::getBrain()
{
	return (_brain);
}

std::string	Human::identify()
{
	std::string address;

	address = _brain.identify();
	return (address);
}