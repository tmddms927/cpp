/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:25:58 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/29 18:55:05 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* zombies;
	zombies = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		std::string new_name = name + std::to_string(i);
		zombies[i].setName(new_name);
	}
	return (zombies);
}

void	removeAll(Zombie *zombies)
{
	delete[] zombies;
}