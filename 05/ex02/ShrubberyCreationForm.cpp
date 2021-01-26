/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:19:56 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 01:31:05 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("Shrubbery Creation", 145, 137),
	m_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref):
	Form(ref),
	m_target(ref.m_target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	if (this == &ref)
		return (*this);
	Form::operator=(ref);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream out(m_target + "_shrubbery");
	out << "                      ___                 " << std::endl;
	out << "                _,-'''   ''''`--.         " << std::endl;
	out << "             ,-'          __,,-- \\        " << std::endl;
	out << "           ,'    __,--''''24      )       " << std::endl;
	out << "          /   .-'42_,--''24      /        " << std::endl;
	out << "        ,'       _42 ___24'-._,-'         " << std::endl;
	out << "      ,'      _,-''''   ''--..__          " << std::endl;
	out << "     (     ,-'                  `.        " << std::endl;
	out << "      `._,'     _   _             ;       " << std::endl;
	out << "       ,'     ,' `-'24-.___..._,-'        " << std::endl;
	out << "       \\    ,''42.-'44`-.248'             " << std::endl;
	out << "        `--'   '42  44  24'               " << std::endl;
	out << "                '42 44 24                 " << std::endl;
	out << "                 '424424                  " << std::endl;
	out << "                  |4448                   " << std::endl;
	out << "                  |444|                   " << std::endl;
	out << "                  |444|                   " << std::endl;
	out << "                  |444|                   " << std::endl;
	out << "                  |444|                   " << std::endl;
	out << "                  24442                   " << std::endl;
	out << "                .242|242.           o     " << std::endl;
	out << "      o       .24824|42842.      o /      " << std::endl;
	out << "\\  Y  |  \\__,2442448|8842422.__   Y       " << std::endl;
	out << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
}