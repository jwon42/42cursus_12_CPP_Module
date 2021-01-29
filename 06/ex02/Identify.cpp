/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 11:02:56 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 12:14:22 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base	*generate(void)
{
	if (rand() % 3 == 0)
		return (new A);
	else if (rand() % 3 == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
	else
		std::cout << "Error: Dynamic Casting Fail";
	std::cout << std::endl;
}

void	identify_from_reference(Base &p)
{
	try
	{
		Base &tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		Base &tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		Base &tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
}