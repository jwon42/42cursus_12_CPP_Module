/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:58:13 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:59:00 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &ref);
		Cure& operator=(Cure const &ref);
		virtual ~Cure();

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
