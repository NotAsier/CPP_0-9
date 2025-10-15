/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/15 19:56:58 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
class Data
{
public:
	Data();
	Data(const int x);
	Data(const Data &other);
	Data &operator=(const Data &rhs);
	~Data();

	int x;
};