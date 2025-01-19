/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 01:55:23 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 01:55:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void iter(T *array, unsigned int length, void (*function)(T const &))
{
	for (unsigned int i = 0; i < length; i++)
		function(array[i]);
}
