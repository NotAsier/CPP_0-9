/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/07/29 23:15:14 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string name;
		int gradeSign;
		int gradeExec;
		bool signature;
	public:
		Form();
		Form(const Form &src);
		Form(std::string const name, int gradeS, int gradeE);
		~Form();

		Form &operator=(const Form &src);

		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getSigned() const;

		void beSigned(Bureaucrat const &a);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	};

std::ostream& operator<<(std::ostream& os, Form const& obj);

#endif