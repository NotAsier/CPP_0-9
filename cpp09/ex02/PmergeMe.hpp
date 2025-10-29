/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/29 19:56:55 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

class PmergeMe {
    private:
        void InsertSort(std::vector<int> &vec);
        void MergeInsertSort(std::vector<int> &vec);

    public:
        PmergeMe();
        PmergeMe(PmergeMe const &copy);
        PmergeMe &operator=(PmergeMe const &other);


        double vecSort(std::vector<int> &vec);
        void vecMergeInsertSort(std::vector<int> &vec);
        void  vecInsertSort(std::vector<int> &vec);

        double deqSort(std::deque<int> &deq);
        void deqMergeInsertSort(std::deque<int> &deq);
        void deqInsertSort(std::deque<int> &left, std::deque<int> &right, std::deque<int> &deq);
        
        void printTime(double time_res, int contSize, std::string const contName);


        ~PmergeMe();
};
#endif
