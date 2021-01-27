/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:07:10 by jwon              #+#    #+#             */
/*   Updated: 2021/01/28 00:14:40 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	bureaucratClassTestEx00(void);

int		main(void)
{
	std::string	dash(60, '-');

	std::cout << "\n\t\t\033[1;31mBUREAUCRAT CLASS TEST EX00\033[0m" << std::endl;
	std::cout << dash << std::endl;
	bureaucratClassTestEx00();
	std::cout << dash << std::endl;
	return (EXIT_SUCCESS);
}

void	bureaucratClassTestEx00(void)
{
	Bureaucrat Jwon("Jwon", 1);
	Bureaucrat Yechoi("Yechoi", 2);
	Bureaucrat Doby("Doby", 150);
	std::string	dash(60, '-');

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Yechoi << Doby;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST [increaseGrade Function], Target : [Yechoi] <<<" << std::endl;
	Yechoi.increaseGrade();
	std::cout << ">>> TEST [decreaseGrade Function], Target : [Jwon] <<<" << std::endl;
	Jwon.decreaseGrade();
	std::cout << dash << std::endl;

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Yechoi << Doby;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST [GradeTooHighExecption], Target : [Yechoi] <<<" << std::endl;
	try
	{
		Yechoi.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;

	std::cout << ">>> TEST [GradeTooLowExecption], Target : [Doby] <<<" << std::endl;
	try
	{
		Doby.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Yechoi << Doby;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST -> Attempt to Create \'300\' Grade Bereaucrat <<<" << std::endl;
	try
	{
		Bureaucrat Polarbear("Polarbear", 300);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;

	std::cout << ">>> TEST -> Attempt to Create \'-42\' Grade Bereaucrat <<<" << std::endl;
	try
	{
		Bureaucrat Polarbear("Polarbear", -42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
