/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:30:18 by jwon              #+#    #+#             */
/*   Updated: 2021/01/20 23:56:01 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &ref);
		Fixed&				operator=(const Fixed &ref);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

	private:
		int					_nb;
		static const int	_bits = 8;
};

#endif