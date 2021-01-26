/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:50:42 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:51:29 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character(std::string const &name);
		Character(Character const &ref);
		Character& operator=(Character const &ref);
		virtual ~Character();

		virtual std::string const		&getName() const;

		virtual void					equip(AMateria *m);
		virtual void					unequip(int idx);
		virtual void					use(int idx, ICharacter &target);

		//test fct
		void							display() const;

	private:
		Character();

		std::string						m_name;
		AMateria						*m_materia[4];
		int								m_nbmat;
};

#endif
