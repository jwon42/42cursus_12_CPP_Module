/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:07:08 by jwon              #+#    #+#             */
/*   Updated: 2021/01/25 23:36:08 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade):
	m_name(name),
	m_grade(grade)
{
	if (m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref):
	m_name(ref.getName()),
	m_grade(ref.getGrade())
{
	if (m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &ref)
{
	if (this == &ref)
		return (*this);
	m_grade = ref.getGrade();
	if (m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

void			Bureaucrat::increaseGrade()
{
	if (m_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	m_grade--;
}

void			Bureaucrat::decreaseGrade()
{
	if (m_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	m_grade++;
}

void			Bureaucrat::signForm(Form &ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout << m_name
			<< " signs " << ref.getName()
			<< " form." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << m_name
			<< " can't sign " << ref.getName()
			<< " form." << std::endl;
		std::cerr << e.what() << '\n';
	}
}

std::string		Bureaucrat::getName() const
{
	return (m_name);
}

int				Bureaucrat::getGrade() const
{
	return (m_grade);
}

const char* 	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratClassException: Grade too High");
}

const char* 	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratClassException: Grade too Low");
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &ref)
{
	out << ref.getName() << ", bureaucrat grade "
		<< ref.getGrade() << std::endl;
	return (out);
}
