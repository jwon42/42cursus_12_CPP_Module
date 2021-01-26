/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:02:31 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:03:06 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const &ref);
		Ice& operator=(Ice const &ref);
		virtual ~Ice();

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
