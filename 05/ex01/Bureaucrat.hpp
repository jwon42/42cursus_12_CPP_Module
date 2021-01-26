/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:07:09 by jwon              #+#    #+#             */
/*   Updated: 2021/01/25 23:45:20 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		// Canonical Form
		Bureaucrat(const std::string &name, int grade); // Constructor Overloading (생성자 오버로딩)
		Bureaucrat(Bureaucrat const &ref); // Copy constructor (복사생성자)
		Bureaucrat& operator=(Bureaucrat const &ref); // Assignation operator (할당연산자)
		virtual ~Bureaucrat(); // Virtual Destructor (가상소멸자)
		// Canonical Form

		void				increaseGrade();
		void				decreaseGrade();
		void				signForm(Form& ref);

		std::string			getName() const;
		int					getGrade() const;

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

	private:
		// Canonical Form
		Bureaucrat();// Default constructor (기본생성자)
		// Canonical Form

		const std::string	m_name;
		int					m_grade;
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &ref);

#endif