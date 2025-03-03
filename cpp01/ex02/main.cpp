/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:44 by aarranz-          #+#    #+#             */
/*   Updated: 2025/03/03 19:50:35 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){
	const std::string str = "HI THIS IS BRAIN";
	const std::string *strPTR = &str;
	const std::string &strREF = str;

	std::cout << "[address]" << std::endl;
	std::cout << "str: " << &str << std::endl;
	std::cout << "strPTR: " << strPTR << std::endl;
	std::cout << "strREF: " << &strREF << std::endl;

    std::cout << "\n";
  
	std::cout << "[value]" << std::endl;
	std::cout << "str: " << str << std::endl;
	std::cout << "strPTR: " << *strPTR << std::endl;
	std::cout << "strREF: " << strREF << std::endl;

    return 0;
}