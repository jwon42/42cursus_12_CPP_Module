/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:31:48 by jwon              #+#    #+#             */
/*   Updated: 2020/11/17 16:33:22 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak()
{
	std::string *panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	memoryLeak();
}