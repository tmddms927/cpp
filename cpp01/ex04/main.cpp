/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:52:11 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/03 11:22:55 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "error!" << std::endl;
		return 0;
	}
	Replace::replace(argv[1], argv[2], argv[3]);
	return 0;
}
