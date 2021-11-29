/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:23:18 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/29 18:55:08 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 5

int main(void)
{
    Zombie  *zombies;
    
    zombies = zombieHorde(N, "zombie");
    for (int i = 0; i < N; ++i)
        zombies[i].announce();

    removeAll(zombies);
    return 0;
}
