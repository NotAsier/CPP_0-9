/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/29 00:14:04 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap();

	FragTrap &operator=(const FragTrap &rhs);

	void highFivesGuys();

protected:
};

#endif
