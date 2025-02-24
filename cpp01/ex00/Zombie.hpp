/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:44 by aarranz-          #+#    #+#             */
/*   Updated: 2025/02/24 12:41:19 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
};
Zombie *newZombie(std::string name);
//void randomChump(std::string name);

#endif