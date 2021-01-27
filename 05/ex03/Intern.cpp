/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:32:35 by jwon              #+#    #+#             */
/*   Updated: 2021/01/28 00:17:06 by jwon             ###   ########.fr       */
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

int			Intern::selectFormIdx(std::string formName)
{
	int			ret;
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	ret = -1;
	for (int i = 0 ; i < (int)(sizeof(formNames)/sizeof(std::string)) ; i++)
	{
		if (!formNames[i].compare(formName))
			ret = i;
	}
	return (ret);
}

Form*		Intern::selectForm(int idx, std::string target)
{
	Form	*ret;
	Form	*forms[3];

	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
	ret = forms[idx];
	for (int i = 0 ; i < (int)(sizeof(**forms)/sizeof(Form)) ; i++)
	{
		if (i != idx)
			delete forms[i];
	}
	return (ret);
}

Form*		Intern::makeForm(std::string formName, std::string target)
{
	int			formIdx;

	formIdx = selectFormIdx(formName);
	if (formIdx != -1)
	{
		std::cout << "Intern creates "
			<< formName << " form." << std::endl;
		return (selectForm(formIdx, target));
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
