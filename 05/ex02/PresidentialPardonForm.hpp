/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:20:03 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 15:59:03 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		// Canonical Form
		PresidentialPardonForm(std::string target);// Constructor Overloading (생성자 오버로딩)
		PresidentialPardonForm(PresidentialPardonForm const &ref); // Copy constructor (복사생성자)
		PresidentialPardonForm& operator=(PresidentialPardonForm const &ref); // Assignation operator (할당연산자)
		~PresidentialPardonForm(); // Destructor (소멸자)
		// Canonical Form

		void			execute(Bureaucrat const &executor) const;

	private:
		// Canonical Form
		PresidentialPardonForm(); // Default constructor (기본생성자)
		// Canonical Form

		std::string 	m_target;
};

#endif