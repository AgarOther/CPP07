/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 02:25:17 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 02:25:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Array
{
	private:

	public:
		Array();
		~Array();
		Array(const Array &copy);
		Array &operator=(Array const &obj);

		Array(unsigned int size);
};
