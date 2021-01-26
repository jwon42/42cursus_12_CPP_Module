/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:43:13 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:46:16 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &ref);
		AMateria& operator=(AMateria const &ref);
		virtual ~AMateria();

		std::string const	&getType() const;
		unsigned int		getXP() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	protected:
		AMateria();

		unsigned int		m_xp;
		std::string			m_type;
};

#endif
