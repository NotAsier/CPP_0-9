/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/29 19:55:19 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
    std::cerr << "please enter numbers!" << std::endl;
    return (1);
    }
    size_t size = argc;
    for (size_t i = 1; i < size; ++i) {
        for (size_t j = 0; argv[i][j]; ++j) {
            if (!isdigit(argv[i][j])) {
                std::cout << "ERROR: You should enter only numbers!" << std::endl;
                return 1;
            }
        }
    }
    
    std::vector<int> vec;
    std::deque<int> deq;
    for (int i = 1; i < argc; ++i) {
        int num = std::atoi(argv[i]);
        if (num < 0 && !isdigit(num)) {
            std::cout << "Error: You didn't enter numbers!" << std::endl;
            return (1);
        }
        vec.push_back(num);
        deq.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    PmergeMe pmergeVec;
    double timeVec_res = pmergeVec.vecSort(vec);
    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    pmergeVec.printTime(timeVec_res, vec.size(), "vector");
    
    PmergeMe pmergeDeq;
    double timeDeq_res = pmergeDeq.deqSort(deq);
    pmergeDeq.printTime(timeDeq_res, deq.size(), "deque");

    return (0);
}