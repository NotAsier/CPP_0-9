/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/10/29 19:50:56 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <string>
#include <sstream>
#include <iostream>
#include <stack>
#include <cstdlib>

class RPN {
    private:
        int checkDigitOrNot(std::string str);
        std::stack<int> stek;

    public:
        std::string _arg;
        RPN(RPN const &copy);
        RPN &operator=(RPN const &copy);
        RPN(std::string const arg);
        int calculate();
};

#endif