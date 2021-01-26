/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:32:35 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 16:37:07 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &ref)
{
	*this = ref;
}

Intern& Intern::operator=(Intern const &ref)
{
	if (this == &ref)
		return (*this);
	return (*this);
}

Intern::~Intern()
{
}

Form*		Intern::makeForm(std::string formName, std::string target)
{
	Form	*form;

	form = 0;
	// if (!formName.compare("shrubbery creation"))
	// 	form = new ShrubberyCreationForm(target);
	// else if (!formName.compare("robotomy request"))
	// 	form = new RobotomyRequestForm(target);
	// else if (!formName.compare("presidential pardon"))
	// 	form = new PresidentialPardonForm(target);
	if (formName == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else if (formName == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (formName == "presidential pardon")
		form = new PresidentialPardonForm(target);
	if (form != 0)
	{
		std::cout << "Intern creates "
			<< formName << " form." << std::endl;
		return (form);
	}
	else
	{
		throw Intern::InvalidTypeFormException();
		return (nullptr);
	}
}

const char* Intern::InvalidTypeFormException::what() const throw()
{
	return ("InternException: Invalid Type Form");
}
