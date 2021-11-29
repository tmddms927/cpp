/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:23:18 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/29 17:10:17 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zom1("zom1");
    Zombie* zom2 = newZombie("zom2");

    zom1.announce();
    zom2->announce();

    delete zom2;
    return 0;
}