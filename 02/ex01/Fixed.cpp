/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 22:39:41 by jwon              #+#    #+#             */
/*   Updated: 2021/01/20 23:14:45 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_nb = ref.getRawBits();
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	_nb = nb << _bits;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	_nb = roundf(nb * (1 << _bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &ref)
		this->_nb = ref.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_nb / (float)(1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (_nb >> _bits);
}

std::ostream	&operator<<(std::ostream &output, Fixed const &ref)
{
	output << ref.toFloat();
	return (output);
}