/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/07/29 23:30:16 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat A(11,"A");
	Form B("formulario", 10, 10);
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	try
	{
		B.beSigned(A);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << A << std::endl;
	try 
	{
		A.signForm(B);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << A << std::endl;
	try
	{
		A.incrementGrade(5);
		A.signForm(B);
		std::cout << B << std::endl;
		A.signForm(B);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	
	return 0;
}