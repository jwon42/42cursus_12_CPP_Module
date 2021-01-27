/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:07:10 by jwon              #+#    #+#             */
/*   Updated: 2021/01/27 23:46:08 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	internClassTestEx03(void);

int		main(void)
{
	std::string	dash(60, '-');

	std::cout << "\n\t\t\033[1;31mINTERN CLASS TEST EX03\033[0m" << std::endl;
	std::cout << dash << std::endl;
	internClassTestEx03();
	std::cout << dash << std::endl;
	return (EXIT_SUCCESS);
}

void	internClassTestEx03(void)
{
	Bureaucrat Jwon("Jwon", 1);
	Intern noname;
	Form *form01;
	Form *form02;
	Form *form03;
	Form *form04;
	std::string	dash(60, '-');

	std::cout << ">>> TEST -> Intern \'noname\' Attempts to Create \'Shrubbery(form01)\' Form <<<" << std::endl;
	form01 = noname.makeForm("shrubbery creation", "Shrubbery");
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Intern \'noname\' Attempts to Create \'Robotomy(form02)\' Form <<<" << std::endl;
	form02 = noname.makeForm("robotomy request", "Robotomy");
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Intern \'noname\' Attempts to Create \'President(form03)\' Form <<<" << std::endl;
	form03 = noname.makeForm("presidential pardon", "Robotomy");
	std::cout << dash << std::endl;
	try
	{
		std::cout << ">>> TEST -> Intern \'noname\' Attempts to Create \'Invalid(form04)\' Form <<<" << std::endl;
		form04 = noname.makeForm("xxxxx", "xxxxx");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;

	std::cout << ">>> TEST -> Jwon Attempts to Sign All Forms <<<" << std::endl;
	Jwon.signForm(*form01);
	Jwon.signForm(*form02);
	Jwon.signForm(*form03);
	std::cout << dash << std::endl;

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon;
	std::cout << *form01 << *form02 << *form03;
}
