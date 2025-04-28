/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/28 23:48:12 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("CLTP");

	for (int i = 0; i < 5; i++)
	{
		claptrap.attack("enemy");
	}

	claptrap.takeDamage(9);

	claptrap.attack("enemy");
	claptrap.beRepaired(2);

	for (int i = 0; i < 5; i++)
	{
		claptrap.attack("enemy");
		claptrap.beRepaired(2);
	}

	claptrap.attack("enemy");
	claptrap.beRepaired(2);

	return 0;
}