/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/15 19:56:11 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &other) { *this = other; }

Serializer::~Serializer() {}

Serializer &Serializer::operator=(const Serializer &) { return *this; }

uintptr_t Serializer::serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data *Serializer::deserialize(uintptr_t raw) { return reinterpret_cast<Data *>(raw); }