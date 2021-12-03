/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:21:17 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/01 11:13:27 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class		Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		~Weapon();
		Weapon(std::string type);
		const std::string	&getType(void);
		void				setType(std::string type);
};

#endif
