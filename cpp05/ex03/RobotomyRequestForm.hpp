/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/07/29 23:18:06 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
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