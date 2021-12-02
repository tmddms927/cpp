/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:39:27 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/02 11:12:13 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <algorithm>

// typedef struct s_level	t_level;

class	Karen
{
	private:
		struct s_level	level[4];
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
    	Karen();
    	~Karen();
		void	complain(std::string level);
};

struct			s_level
{
	std::string	name;
	void		(Karen::*f)();
};

#endif
