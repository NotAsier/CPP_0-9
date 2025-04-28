/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/29 00:07:22 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "Default ScavTrap has been constructed!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap " << Name << " has been constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " has been destructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	std::cout << "ScavTrap " << Name << " has been copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		Name = other.Name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	std::cout << "ScavTrap " << Name << " has been assigned from another ScavTrap!" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " can't attack due to low energy or hit points." << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}