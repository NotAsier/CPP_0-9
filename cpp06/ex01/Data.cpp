/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/15 19:56:48 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : x(0) {}

Data::Data(const int x) : x(x) {}

Data::Data(const Data &other) { *this = other; }

Data &Data::operator=(const Data &rhs)
{
	this->x = rhs.x;
	return *this;
}

Data::~Data() {}