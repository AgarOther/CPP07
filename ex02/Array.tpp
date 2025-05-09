/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:52:43 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/09 15:50:01 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
