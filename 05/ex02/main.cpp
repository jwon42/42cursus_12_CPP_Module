/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:07:10 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 16:46:46 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	variousFormClassesTestEx02(void);

int		main(void)
{
	std::string	dash(60, '-');

	std::cout << "\n\t\t\033[1;31mVARIOUS FORM CLASSES TEST EX02\033[0m" << std::endl;
	std::cout << dash << std::endl;
	variousFormClassesTestEx02();
	std::cout << dash << std::endl;
	return (EXIT_SUCCESS);
}

void	variousFormClassesTestEx02(void)
{
	Bureaucrat Jwon("Jwon", 1);
	Bureaucrat Yechoi("Yechoi", 30);
	Bureaucrat Doby("Doby", 138);
	ShrubberyCreationForm Shrubbery("Samsung"); // sign 145, esec 137
	RobotomyRequestForm Robotomy("Apple"); // sign 72, exec 45
	PresidentialPardonForm President("Trump"); // sign 25, exec 5
	std::string	dash(60, '-');

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Yechoi << Doby;
	std::cout << Shrubbery << Robotomy << President;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST -> Doby Attempts to Sign \'Shrubbery\' Form <<<" << std::endl;
	Doby.signForm(Shrubbery);
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Jwon Attempts to Sign \'Shrubbery\' Form <<<" << std::endl;
	Jwon.signForm(Shrubbery);
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Yechoi Attempts to Sign \'Robotomy\' Form <<<" << std::endl;
	Yechoi.signForm(Robotomy);
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Jwon Attempts to Sign \'President\' Form <<<" << std::endl;
	Jwon.signForm(President);
	std::cout << dash << std::endl;

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Yechoi << Doby;
	std::cout << Shrubbery << Robotomy << President;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST -> Doby Attempts to Execute \'Shrubbery\' Form <<<" << std::endl;
	Doby.executeForm(Shrubbery);
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> increaseGrade Function, Target : \'Doby\' <<<" << std::endl;
	Doby.increaseGrade();
	std::cout << dash << std::endl;

	std::cout << ">>> STATUS <<<" << std::endl;
	std::cout << Jwon << Yechoi << Doby;
	std::cout << Shrubbery << Robotomy << President;
	std::cout << dash << std::endl;

	std::cout << ">>> TEST -> Doby Attempts to Execute \'Shrubbery\' Form <<<" << std::endl;
	Doby.executeForm(Shrubbery);
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Yechoi Attempts to Execute \'Robotomy\' Form <<<" << std::endl;
	Yechoi.executeForm(Robotomy);
	std::cout << dash << std::endl;
	std::cout << ">>> TEST -> Jwon Attempts to Execute \'President\' Form <<<" << std::endl;
	Jwon.executeForm(President);
}