/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 01:56:46 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 01:56:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void shout(const T &arg)
{
	std::cout << arg << std::endl;
}

int	main(void)
{
	int test1[] = {1, 2, 3, 4, 5};
	char test2[] = "coucou";
	iter(test1, 5, shout);
	iter(test2, 6, shout);
}
