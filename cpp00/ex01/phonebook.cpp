/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:07:41 by aarranz-          #+#    #+#             */
/*   Updated: 2025/02/18 14:31:45 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::add_contact() {
	const std::string	titles[5] = {"first name: ", "last name: ", "nickname: ", "phone number: ", "darkerst secret: "};
	std::string			line;
	bool 				error = false;

	for(int i = 0; i < 5; i++)
	{
		std::cout << "Write your " + titles[i] << std::endl;
		std::getline(std::cin, line);
		if (line[0] && i == 3)
		{
			for(int j = 0; j < 8; j++)
			{	
				if(!std::isdigit(line[j]))
					error = true;
			}
		}
		
		if(error)
		{
			std::cout << "error" << std::endl;	
		}

		if(!error)
		{
			
		}
	}		
}