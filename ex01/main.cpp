/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:40:58 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 14:51:22 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void printInt(int i)
{
	std::cout << i;
}

void printChar(char c)
{
	std::cout << c;
}

int main()
{
	std::string test = "bonsOIR";
	iter(test.c_str(), test.length(), printChar);
	std::cout << std::endl;

	int arr[] = {1, 2, 3, 42, 69};
	iter(arr, 5, printInt);
	std::cout << std::endl;
}
