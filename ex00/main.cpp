/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:24:38 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 14:37:48 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "colors.hpp"
#include <iostream>

int main()
{
	int a = 5;
	int b = 4;

	std::cout << CYAN << "Max: " << max(a, b) << RESET << std::endl;
	std::cout << MAGENTA << "Min: " << min(a, b) << RESET << std::endl;
	swap(a, b);
	std::cout << YELLOW << "Swap: a: " << a << " | b: " << b << RESET << std::endl;
}
