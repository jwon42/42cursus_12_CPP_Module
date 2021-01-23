/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:51:50 by jwon              #+#    #+#             */
/*   Updated: 2020/12/27 16:56:28 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_iq = 150;
	this->_age = 30;
}

Brain::~Brain()
{
}

void			Brain::print_message()
{
	std::cout << "IQ : " << _iq << std::endl;
	std::cout << "AGE : " << _age << std::endl;
 }


std::string		Brain::identify() const
{
	std::string			address;
	std::stringstream	ss;

	ss << this;
	address = ss.str();
	return (address);
}
