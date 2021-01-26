/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:19:58 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 15:23:22 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		// Canonical Form
		RobotomyRequestForm(std::string target);// Constructor Overloading (생성자 오버로딩)
		RobotomyRequestForm(RobotomyRequestForm const &ref); // Copy constructor (복사생성자)
		RobotomyRequestForm& operator=(RobotomyRequestForm const &ref); // Assignation operator (할당연산자)
		~RobotomyRequestForm(); // Destructor (소멸자)
		// Canonical Form

		void			execute(Bureaucrat const &executor) const;

	private:
		// Canonical Form
		RobotomyRequestForm(); // Default constructor (기본생성자)
		// Canonical Form

		std::string 	m_target;
};

#endif