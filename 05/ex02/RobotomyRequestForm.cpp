/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:20:01 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 01:01:36 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("Robotomy Request", 72, 45),
	m_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref):
	Form(ref),
	m_target(ref.m_target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	if (this == &ref)
		return (*this);
	Form::operator=(ref);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	srand(time(NULL));
	std::cout << "* VRRRRRR BZZZZZZ *" << std::endl;
	if (rand() % 2)
	{
		std::cout << m_target
			<< " has been robotomized succesfully." << std::endl;
	}
	else
	{
		std::cout << m_target
			<< " robotomization has failed." << std::endl;
	}
}