/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 02:27:37 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 02:27:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array()
{

}

Array::~Array()
{

}

Array::Array(const Array &copy)
{
	*this = copy;
}

Array &Array::operator=(Array const &obj)
{
	if (this == &obj)
		return (*this);
}

Array::Array<int>(unsigned int size)
{
	int *array = new int[size];
}
