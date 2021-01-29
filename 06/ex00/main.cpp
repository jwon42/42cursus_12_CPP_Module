/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:19:13 by jwon              #+#    #+#             */
/*   Updated: 2021/01/28 19:18:02 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}

	Conversion C(argv[1]);
	C.printAll();
	return (EXIT_SUCCESS);
}
