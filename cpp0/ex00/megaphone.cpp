/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:30:41 by aarranz-          #+#    #+#             */
/*   Updated: 2025/01/13 14:30:47 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string str;
    if(argc > 1)
    {
        for(int l = 1; l < argc; l++)
        {
            str = argv[l];
            for(size_t i = 0; i < str.length(); i++)
            {
                 std::cout << (str[i] = std::toupper(str[i]));
            }
        }
    }
    else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        
    std::cout << std::endl;
    return(0);
}