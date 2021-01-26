/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:21:00 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 15:29:35 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		// Canonical Form
		Intern(); // Default constructor (기본생성자)
		Intern(Intern const &ref); // Copy constructor (복사생성자)
		Intern& operator=(Intern const &ref); // Assignation operator (할당연산자)
		~Intern(); // Destructor (소멸자)
		// Canonical Form

		Form*		makeForm(std::string formName, std::string target);

		class InvalidTypeFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif