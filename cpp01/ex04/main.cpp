/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:30:41 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/08 23:45:28 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Expected 3 arguments." << std::endl;
		return 1;
	}

	std::string inputFileName = argv[1];
	std::string toFind = argv[2];
	std::string toReplace = argv[3];

	if (toFind.empty())
	{
		std::cerr << "Error: String to replace cannot be empty." << std::endl;
		return 1;
	}

	std::ifstream inputFile(inputFileName.c_str());
	if (!inputFile)
	{
		std::cerr << "Error: Cannot open input file." << std::endl;
		return 1;
	}

	std::ofstream outputFile((inputFileName + ".replace").c_str());
	if (!outputFile)
	{
		std::cerr << "Error: Cannot create output file." << std::endl;
		return 1;
	}

	std::ostringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();

	std::size_t pos = 0;
	std::size_t prev = 0;
	while ((pos = content.find(toFind, prev)) != std::string::npos)
	{
		outputFile << content.substr(prev, pos - prev) << toReplace;
		prev = pos + toFind.length();
	}
	outputFile << content.substr(prev);
	return 0;
}