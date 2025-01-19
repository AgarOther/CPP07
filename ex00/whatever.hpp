/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 01:35:33 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 01:35:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utility>

template <typename T>
void swap(T &arg1, T &arg2)
{
	std::swap(arg1, arg2);
}

template <typename T>
const T min(const T &arg1, const T &arg2)
{
	return (arg1 < arg2 ? arg1 : arg2);
}

template <typename T>
const T max(const T &arg1, const T &arg2)
{
	return (arg1 > arg2 ? arg1 : arg2);
}
