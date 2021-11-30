/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:52:11 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/30 17:50:56 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int argc, char **argv)
{
	if (argc != 4 || std::strlen(argv[2]) == 0 || std::strlen(argv[3]) == 0)
	{
		std::cout << "error!" << std::endl;
		return (0);
	}
	std::string file_name = argv[1];
	file_name.append(".replace");

	std::ifstream readStream;
	readStream.open(file_name);
	return (0);
}
