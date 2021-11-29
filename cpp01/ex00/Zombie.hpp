/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:59:24 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/29 11:07:55 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

include <iostream>

class	Zombie
{
	private	:
		std::string	name;

	public	:
		Zombie(std::string name)
		{
			this.name = name;
		}
}

#endif