/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/29 19:56:21 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy) {*this = copy;}

PmergeMe &PmergeMe::operator=(PmergeMe const &other) {
    (void)other;
    return (*this);
}

double PmergeMe::vecSort(std::vector<int> &vec) {
    clock_t	start, finish;
    start = clock();
    vecMergeInsertSort(vec);
    finish = clock();
    return ((double) (finish - start) / CLOCKS_PER_SEC);
}

void PmergeMe::vecMergeInsertSort(std::vector<int> &vec) {
    if (vec.size() <= 5) {
        vecInsertSort(vec);
    } else {
        std::vector<int> left(vec.begin(), vec.begin() + vec.size() / 2);
        std::vector<int> right(vec.begin() + vec.size() / 2, vec.end());
        vecMergeInsertSort(left);
        vecMergeInsertSort(right);
        vec.clear();
        std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(vec));
    }
}

void  PmergeMe::vecInsertSort(std::vector<int> &vec) {
    for (size_t i = 1; i < vec.size(); ++i) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = key;
    }
}

void PmergeMe::printTime(double time_res, int contSize, std::string const contName) {
    std::cout << "Time to process a range of " << contSize << " elements with std::" << contName << " :\t" << time_res << " us" << std::endl;
}


double PmergeMe::deqSort(std::deque<int> &deq) {
    clock_t	start, finish;
    start = clock();
    deqMergeInsertSort(deq);
    finish = clock();
    return ((double) (finish - start) / CLOCKS_PER_SEC);
}


void PmergeMe::deqMergeInsertSort(std::deque<int> &deq) {
    if (deq.size() <= 1)
        return;

    std::deque<int> left, right;
    for (size_t i = 0; i < deq.size(); ++i) {
        if (i < deq.size() / 2)
            left.push_back(deq[i]);
        else
            right.push_back(deq[i]);
    }

    deqMergeInsertSort(left);
    deqMergeInsertSort(right);

    deqInsertSort(left, right, deq);
}

void PmergeMe::deqInsertSort(std::deque<int> &left, std::deque<int> &right, std::deque<int> &deq) {
    std::deque<int>::iterator left_it = left.begin();
    std::deque<int>::iterator right_it = right.begin();
    std::deque<int>::iterator deq_it = deq.begin();

    while (left_it != left.end() && right_it != right.end()) {
        if (*left_it < *right_it) {
            *deq_it = *left_it;
            ++left_it;
        } else {
            *deq_it = *right_it;
            ++right_it;
        }
        ++deq_it;
    }

    while (left_it != left.end()) {
        *deq_it = *left_it;
        ++left_it;
        ++deq_it;
    }

    while (right_it != right.end()) {
        *deq_it = *right_it;
        ++right_it;
        ++deq_it;
    }
}