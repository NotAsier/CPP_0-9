/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:44 by aarranz-          #+#    #+#             */
/*   Updated: 2025/03/03 19:37:25 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if (N <= 0){
		return NULL;
	}
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; ++i){
		horde[i].setName(name);
	}
	return horde;
}