/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/28 23:39:25 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
private:
	std::string Name;
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif