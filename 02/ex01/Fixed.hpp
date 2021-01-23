/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 12:49:31 by jwon              #+#    #+#             */
/*   Updated: 2021/01/20 23:55:52 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &ref);
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed&				operator=(Fixed const &ref);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
		int					_nb;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &ref);

#endif