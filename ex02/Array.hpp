/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:06:43 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 13:06:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

template <class T>
Array<T>::Array()
{
	_value = new T[0];
	_size = 0;
}

template <class T>
Array<T>::~Array()
{
	delete [] _value;
}

template <class T>
Array<T>::Array(const Array &copy)
{
	*this = copy;
}

template <class T>
Array<T> &Array<T>::operator=(Array const &obj)
{
	if (this != &obj)
	{
		_size = obj._size;
		_value = new T[obj._size];
		for (int i = 0; i < _size; i++)
			_value[i] = obj._value[i];
	}
	return (*this);
}

template <class T>
T &Array<T>::operator[](int i) const
{
	if (i < 0 || i >= _size)
		throw std::exception();

	return _value[i];
}

template <class T>
Array<T>::Array(int size)
{
	_value = new T[size];
	_size = size;
}