/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:04:47 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:05:40 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &ref);
		MateriaSource& operator=(MateriaSource const &ref);
		virtual ~MateriaSource();

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type);

	private:
		AMateria			*m_materia[4];
		int					m_nbmat;
};

#endif
