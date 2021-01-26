/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:07:10 by jwon              #+#    #+#             */
/*   Updated: 2021/01/25 23:14:04 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	formClassTestEx01(void);

int		main(void)
{
	std::string	dash(60, '-');

	std::cout << "\n\t\t\033[1;31mFORM CLASS TEST EX01\033[0m" << std::endl;
	std::cout << dash << std::endl;
	formClassTestEx01();
	std::cout << dash << std::endl;
	return (EXIT_SUCCESS);
}

void	formClassTestEx01(void)
{
	Bureaucrat Jwon("Jwon", 1);
	Bureaucrat Doby("Doby", 150);
	Form Secret42("Secret42", 1, 2);
	Form Advertise01("Advertise01", 149, 150);
	std::string	dash(60, '-');

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Doby;
	std::cout << Secret42 << Advertise01;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST -> Jwon Attempts to Sign \'Secret42\' Form <<<" << std::endl;
	Jwon.signForm(Secret42);
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Doby Attempts to Sign \'Advertise01\' Form <<<" << std::endl;
	Doby.signForm(Advertise01);
	Doby.increaseGrade();
	Doby.signForm(Advertise01);
	std::cout << dash << std::endl;

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Doby;
	std::cout << Secret42 << Advertise01;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST [GradeTooLowExecption] <<<" << std::endl;
	try
	{
		Doby.signForm(Secret42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;
	std::cout << ">>> TEST [GradeTooHighExecption] <<<" << std::endl;
	try
	{
		Form Important007("Inportant007", -42, 150);
		Jwon.signForm(Important007);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}