/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 01:30:41 by jwon              #+#    #+#             */
/*   Updated: 2021/01/28 19:13:50 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>

class Conversion
{
	public:
		Conversion(std::string source);
		Conversion(Conversion const &ref);
		Conversion& operator=(Conversion const &ref);
		~Conversion();

		void			printAll(void);
		int				castTypes(void);

		std::string		getSource(void) const;

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		Conversion();

		std::string		m_source;
		char			m_value_c;
		int				m_value_i;
		long			m_value_l;
		float			m_value_f;
		double			m_value_d;

		void			printToChar(void);
		void			printToInt(void);
		void			printToFloat(void);
		void			printToDouble(void);
};

#endif