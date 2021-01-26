/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:20:05 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 00:48:45 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("Presidential Pardon", 25, 5),
	m_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref):
	Form(ref),
	m_target(ref.m_target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	if (this == &ref)
		return (*this);
	Form::operator=(ref);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << m_target
		<< " has been pardoned by Zafod Beeblebrox." << std::endl;
}