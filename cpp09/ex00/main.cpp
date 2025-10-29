/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/29 19:48:48 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "include the Input file!" << std::endl;
        return (1);
    }
    try
    {
        BitcoinExchange btex;
        btex.loadCsv("data.csv");
        btex.inputTxt(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << "ERROR!!" << e.what() << '\n';
    }
    
    return(0);
}