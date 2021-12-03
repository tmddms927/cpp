/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:14:50 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/03 14:56:27 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv)
{
    Karen karen;

	if (argc > 1)
		karen.complain(argv[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;		
	

    return 0;
}
