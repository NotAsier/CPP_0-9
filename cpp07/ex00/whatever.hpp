/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/19 21:52:17 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

template<typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	&min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}