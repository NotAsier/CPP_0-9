/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:30:41 by aarranz-          #+#    #+#             */
/*   Updated: 2025/04/09 00:01:53 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl 
{
	private:
	
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
    public:
	
		Harl();
		~Harl();

        void complain(std::string level);
        
};

#endif