/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:38:21 by aarranz-          #+#    #+#             */
/*   Updated: 2025/03/03 16:34:32 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	PhoneBook	PhoneBook;
	std::string	command;

	while (1) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return (0);
		}
		if (command == "ADD") {
			PhoneBook.addContact();
		} else if (command == "SEARCH") {
			PhoneBook.searchContact();
		} else if (command == "EXIT") {
			std::cout << "EXIT" << std::endl;
			break ;
		} else {
			std::cout << "Error: Invalid command. Please try again.\n";
		}
	}
	return 0;
}