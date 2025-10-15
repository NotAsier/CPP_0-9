/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/15 19:51:37 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *ptr = new Data;
	try
	{
		uintptr_t num = Serializer::serialize(ptr);

		Data *new_ptr = Serializer::deserialize(num);

		std::cout << "Ptr == " << ptr << std::endl;
		std::cout << "New Ptr == " << new_ptr << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		delete ptr;
		return 1;
	}
	delete ptr;
	return 0;
}