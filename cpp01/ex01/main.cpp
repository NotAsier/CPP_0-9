/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:44 by aarranz-          #+#    #+#             */
/*   Updated: 2025/03/03 19:40:51 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include "Zombie.hpp"

int	main(){
	int n = 3;
	Zombie *zombies = zombieHorde(n, "Francisquito");
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);	
}