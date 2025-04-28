/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/29 00:10:20 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << Name << " has been constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	std::cout << "FragTrap " << Name << " has been copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		Name = other.Name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	std::cout << "FragTrap " << Name << " has been assigned from another FragTrap!" << std::endl;
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " has been destructed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << Name << " excitedly requests: 'Hey! High five me!'" << std::endl;
}