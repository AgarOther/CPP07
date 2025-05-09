/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:53:04 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 15:52:58 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include "Array.tpp"

template <class T>
Array<T>::Array()
{
	_array = new T[0];
	_length = 0;
}

template <class T>
Array<T>::Array(int length)
{
	_array = new T[length];
	_length = length;
}

template <class T>
Array<T>::Array(Array &copy)
{
	_array = new T[copy.size()];
	_length = copy.size();
	for (int i = 0; i < copy.size(); i++)
		_array[i] = copy[i];
}

template <class T>
Array<T> &Array<T>::operator=(Array &obj)
{
	if (this == &obj)
		return (*this);
	delete [] _array;
	_array = new T[obj.size()];
	_length = obj.size();
	for (int i = 0; i < obj.size(); i++)
		_array[i] = obj[i];
	return (*this);
}

template <class T>
T &Array<T>::operator[](int index)
{
	if (index < 0 || index >= _length)
		throw std::out_of_range("Index is out of range.");
	return (_array[index]);
}

template <class T>
Array<T>::~Array<T>()
{
	delete [] _array;
}

template <class T>
int Array<T>::size() const
{
	return (_length);
}

#endif
