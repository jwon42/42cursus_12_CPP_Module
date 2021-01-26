/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:36 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:45:16 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const &name);
		Character(Character const &ref);
		Character& operator=(Character const &ref);
		~Character();

		std::string		getName() const;
		int				getAP() const;
		AWeapon			*getWeapon() const;

		void			recoverAP();
		void			equip(AWeapon *weapon);
		void			attack(Enemy *enemy);

	private:
		Character();

		std::string		m_name;
		int				m_ap;
		AWeapon			*m_weapon;
};

std::ostream& operator<<(std::ostream &os, const Character &ref);

#endif
