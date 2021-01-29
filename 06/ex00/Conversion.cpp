/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 01:30:39 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 10:49:05 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string source):
	m_source(source)
{
}

Conversion::Conversion(Conversion const &ref)
{
	*this = ref;
}

Conversion& Conversion::operator=(Conversion const &ref)
{
	if (this != &ref)
		this->m_source = ref.getSource();
	return (*this);
}

void			Conversion::printAll(void)
{
	if (castTypes())
		return ;
	try
	{
		printToChar();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		printToInt();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		printToFloat();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		printToDouble();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int				Conversion::castTypes(void)
{
	try
	{
		this->m_value_d = std::stod(this->m_source);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (1);
	}
	this->m_value_c = static_cast<char>(this->m_value_d);
	this->m_value_i = static_cast<int>(this->m_value_d);
	this->m_value_l = static_cast<long>(this->m_value_d);
	this->m_value_f = static_cast<float>(this->m_value_d);
	return (0);
}

void			Conversion::printToChar(void)
{
	std::cout << "char: ";
	if ((this->m_value_i - this->m_value_d) != 0)
		throw Conversion::ImpossibleException();
	if (!std::isprint(this->m_value_i))
		throw Conversion::NonDisplayableException();
	std::cout << "'" << this->m_value_c << "'" << std::endl;
}

void			Conversion::printToInt(void)
{
	std::cout << "int: ";
	if (std::isnan(this->m_value_d) ||
		std::isinf(this->m_value_d) ||
		(this->m_value_l > INT_MAX) ||
		(this->m_value_l < INT_MIN))
		throw Conversion::ImpossibleException();
	std::cout << this->m_value_i << std::endl;
}

void			Conversion::printToFloat(void)
{
	std::cout << "float: "
		<< this->m_value_f;
	if ((this->m_value_i - this->m_value_d) != 0)
		std::cout << "f";
	else
		std::cout << ".0f";
	std::cout << std::endl;
}

void			Conversion::printToDouble(void)
{
	std::cout << "double: "
		<< this->m_value_d;
	if ((this->m_value_i - this->m_value_d) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

std::string		Conversion::getSource(void) const
{
	return (this->m_source);
}

Conversion::~Conversion()
{
}

const char* Conversion::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char* Conversion::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}
