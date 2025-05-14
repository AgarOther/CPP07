/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:53:04 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/15 00:58:41 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array
{
	public:
		Array();
		Array(int length);
		Array(Array &copy);
		Array &operator=(Array &obj);
		T &operator[](int index);
		~Array();

		int size() const;
	private:
		T *_array;
		int _length;
};

# include "Array.tpp"

#endif
