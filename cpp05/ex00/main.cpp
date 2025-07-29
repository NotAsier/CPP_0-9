/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/07/29 23:35:05 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat A(3,"A");
	Bureaucrat B(A);
	Bureaucrat D;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << D << std::endl;
	try
	{
		A.decrementGrade(100);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << A << std::endl;
	try 
	{
		A.incrementGrade(100);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << A << std::endl;
	try
	{
		A.incrementGrade(10);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}

	try
	{
		Bureaucrat C(0,"C");
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr<< "Failed instance: " << e.what()<< std::endl;
	}
	
	
	return 0;
}