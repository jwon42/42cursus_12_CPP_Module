/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:50:39 by jwon              #+#    #+#             */
/*   Updated: 2021/01/25 23:36:41 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

Form::Form(std::string name, int signGrade, int executeGrade):
	m_name(name),
	m_signed(false),
	m_signGrade(signGrade),
	m_executeGrade(executeGrade)
{
	if (m_signGrade < 1 || m_executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (m_signGrade > 150 || m_executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &ref):
	m_name(ref.getName()),
	m_signed(ref.getSigned()),
	m_signGrade(ref.getSignGrade()),
	m_executeGrade(ref.getExecuteGrade())
{
	if (m_signGrade < 1 || m_executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (m_signGrade > 150 || m_executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form& Form::operator=(Form const &ref)
{
	if (this == &ref)
		return (*this);
	m_signed = ref.getSigned();
	if (m_signGrade < 1 || m_executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (m_signGrade > 150 || m_executeGrade > 150)
		throw Form::GradeTooLowException();
	return (*this);
}

Form::~Form()
{
}

void			Form::beSigned(Bureaucrat &ref)
{
 	if (m_signGrade >= ref.getGrade())
		m_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::string		Form::getName() const
{
	return (m_name);
}

bool			Form::getSigned() const
{
	return (m_signed);
}

int				Form::getSignGrade() const
{
	return (m_signGrade);
}

int				Form::getExecuteGrade() const
{
	return (m_executeGrade);
}

const char* 	Form::GradeTooHighException::what() const throw()
{
	return ("FormClassException: Grade too High");
}

const char* 	Form::GradeTooLowException::what() const throw()
{
	return ("FormClassException: Grade too Low");
}

std::ostream& operator<<(std::ostream &out, Form const &ref)
{
	std::string signStatus;
	if (ref.getSigned())
		signStatus = "signed";
	else
		signStatus = "unsigned";
	out << ref.getName() << " form is " << signStatus
		<< " [grade required to sign : " << ref.getSignGrade()
		<< ", grade required to execute : " << ref.getExecuteGrade()
		<< "]" << std::endl;
	return (out);
}