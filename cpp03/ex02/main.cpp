/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/29 00:12:26 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("SC4V-TP");
	FragTrap frag("FR4G-TP");
	ClapTrap clap("CL4P-TP");

	scav.attack("enemy");
	frag.attack("enemy");
	clap.attack("enemy");

	scav.takeDamage(30);
	frag.takeDamage(40);
	scav.beRepaired(15);
	frag.beRepaired(20);
	scav.guardGate();
	frag.highFivesGuys();

	return 0;
}