/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:40 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 18:38:54 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &ref);
		Enemy& operator=(Enemy const &ref);
		virtual ~Enemy();

		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDamage(int amount);

	protected:
		Enemy();

		int				m_hp;
		std::string		m_type;
};

#endif
