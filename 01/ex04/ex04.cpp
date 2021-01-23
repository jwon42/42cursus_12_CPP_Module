/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:25:00 by jwon              #+#    #+#             */
/*   Updated: 2020/11/28 13:37:59 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer = &str;
	std::string &reference = str;

	std::cout << str << " <- string" << std::endl;
	std::cout << *pointer << " <- pointer" << std::endl;
	std::cout << reference << " <- reference" << std::endl;
	return (0);
}
