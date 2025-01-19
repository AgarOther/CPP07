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

#include <iostream>

template <class T>
class Array
{
	private:
		T *_value;
		int _size;
	public:
		Array();
		~Array();
		Array(const Array &copy);
		Array &operator=(Array const &obj);

		T &operator [] (int i) const;

		Array(int size);
};
