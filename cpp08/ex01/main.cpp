/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/26 20:23:53 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		// Span sp = Span(5);
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;
		// return 0;
	}
	{
		Span sp = Span(3);
		int longest;
		int shortest;
		sp.addNumber(5);
		shortest = sp.shortestSpan();
		longest = sp.longestSpan();
		if (shortest >= 0)
			std::cout << shortest << std::endl;
		if (longest >= 0)
			std::cout << longest << std::endl;
		sp.addNumber(sp.getBegin() + 1, 2);
		sp.display();
		shortest = sp.shortestSpan();
		longest = sp.longestSpan();
		if (shortest >= 0)
			std::cout << shortest << std::endl;
		if (longest >= 0)
			std::cout << longest << std::endl;
		sp.addNumber(20);
	}
}