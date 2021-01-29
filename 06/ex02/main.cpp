/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:52:47 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 12:15:39 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Identify.hpp"

int		main(void)
{
	Base* p[5];
	std::string dash(33, '-');

	std::cout << "\n\033[1;31m   DERVIED CLASS IDENTIFY TEST\033[0m" << std::endl;
	std::cout << dash << std::endl;
	for (int i = 0 ; i < 5 ; i++)
	{
		std::cout << "\tTEST " << i + 1 << std::endl;
		p[i] = generate();
		std::cout << "Identify from Pointer" << std::endl;
		identify_from_pointer(p[i]);
		std::cout << "Identify from Reference" << std::endl;
		identify_from_reference(*p[i]);
		delete p[i];
		std::cout << dash << std::endl;
	}
	return (EXIT_SUCCESS);
}
