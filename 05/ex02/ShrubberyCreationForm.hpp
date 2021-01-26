/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:19:51 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 15:23:18 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		// Canonical Form
		ShrubberyCreationForm(std::string target);// Constructor Overloading (생성자 오버로딩)
		ShrubberyCreationForm(ShrubberyCreationForm const &ref); // Copy constructor (복사생성자)
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &ref); // Assignation operator (할당연산자)
		~ShrubberyCreationForm(); // Destructor (소멸자)
		// Canonical Form

		void			execute(Bureaucrat const &executor) const;

	private:
		// Canonical Form
		ShrubberyCreationForm(); // Default constructor (기본생성자)
		// Canonical Form

		std::string 	m_target;
};

#endif