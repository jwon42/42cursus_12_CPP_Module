/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:32:35 by jwon              #+#    #+#             */
/*   Updated: 2021/01/27 19:13:50 by jwon             ###   ########.fr       */
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
    std::string targets[3] =
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    Form       *forms[3];
    Form       *ret = 0;

    forms[0] = new ShrubberyCreationForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new PresidentialPardonForm(target);

    int i;
    for (i = 0 ; i < 3 ; i++)
    {
        if (formName == targets[i])
        {
            std::cout << "Intern creates " << formName << " form." << std::endl;
            ret = forms[i];
            continue;
        }
        delete forms[i];
    }
    if (ret != 0)
        return (ret);
    throw Intern::InvalidTypeFormException();
    return (nullptr);
}

const char* Intern::InvalidTypeFormException::what() const throw()
{
	return ("InternException: Invalid Type Form");
}
