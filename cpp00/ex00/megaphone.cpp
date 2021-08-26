/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seung-eun <seung-eun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:39:46 by seung-eun         #+#    #+#             */
/*   Updated: 2021/08/28 13:11:28 by seung-eun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc <= 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
		{
			if (argv[i][j] > 96 && argv[i][j] < 123)
				argv[i][j] = argv[i][j] - 32;
		}
		std::cout<<argv[i];
	}
	std::cout<<"\n";
	return 0;
}