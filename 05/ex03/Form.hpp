/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:30:32 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 00:36:54 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Canonical Form
		Form(std::string name, int signGrade, int executeGrade); // Constructor Overloading (생성자 오버로딩)
		Form(Form const& ref); // Copy constructor (복사생성자)
		Form& operator=(Form const& ref); // Assignation operator (할당연산자)
		virtual ~Form(); // Virtual Destructor (가상소멸자)
		// Canonical Form

		void				beSigned(Bureaucrat& ref);
		virtual void		execute(Bureaucrat const& executor) const = 0;

		std::string			getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		// Canonical Form
		Form();// Default constructor (기본생성자)
		// Canonical Form

		const std::string	m_name;
		bool				m_signed;
		const int			m_signGrade;
		const int			m_executeGrade;
};

std::ostream& operator<<(std::ostream & out, Form const & ref);

#endif