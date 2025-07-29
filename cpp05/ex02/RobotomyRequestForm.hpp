/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/07/29 23:16:29 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string.h>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm(std::string trgt);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		void execute(Bureaucrat const &a);
};
std::ostream& operator<<(std::ostream& os, RobotomyRequestForm const& obj);

#endif