/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/19 22:10:59 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> a(5);
	Array<int> b(5);
	std::cout << a.size() << std::endl;

	for (unsigned int i = 0; i < 5; i++)
	{
		a[i] = i;
		b[i] = i * i;
	}

	for (unsigned int i = 0; i < 5; i++)
	{
		std::cout << a[i] << " ";
		std::cout << b[i] << std::endl;
	}

	try
	{
		a[6] = 5;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		a[-42] = 5;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<Array<Array<int>>> c(5);
	
	int i = 0;
	for (unsigned int x = 0; x < 5; x++)
	{
		c[x] = Array<Array<int>>(5);
		for (unsigned int y = 0; y < 5; y++)
		{
			c[x][y] = Array<int>(5);
			for (unsigned int z = 0; z < 5; z++)
			{
				c[x][y][z] = i++;
			}
		}
	}

	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		std::cout << c[rand() % 5][rand() % 5][rand() % 5] << std::endl;
	}

	Array<int> d;
	std::cout << d.size() << std::endl;
	Array<int> e(5);
	for (unsigned int i = 0; i < 5; i++)
	{
		e[i] = i;
	}
	d = e;
	for (unsigned int i = 0; i < 5; i++)
	{
		std::cout << d[i] << std::endl;
	}

	return 0;
}