/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:38:21 by aarranz-          #+#    #+#             */
/*   Updated: 2025/02/11 12:53:10 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string	line;

	while(1)
	{
		std::cout << "▶️ ";
		std::getline(std::cin, line);
//		if (line.compare("ADD") == 0)
//		if (line.compare("SEARCH") == 0)
		if (line.compare("EXIT") == 0)
			break;
	}
}