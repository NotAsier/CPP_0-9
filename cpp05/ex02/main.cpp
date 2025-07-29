/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/07/29 23:35:37 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat A(11,"A");
	ShrubberyCreationForm B;
	PresidentialPardonForm C;
	RobotomyRequestForm D;
	std::cout << "\n---------Initial values--------"<< std::endl;
	std::cout << A;
	std::cout << B;
	std::cout << C;
	std::cout << D;


	std::cout << "\n---------Signing Forms--------"<< std::endl;

	try
	{
		B.beSigned(A);
		C.beSigned(A);
		D.beSigned(A);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << "\n---------After Signing--------"<< std::endl;
	std::cout << B;
	std::cout << C;
	std::cout << D;
	std::cout << "\n---------Signing from Bureaucrat--------"<< std::endl;
	try 
	{
		A.signForm(B);
		A.signForm(C);
		A.signForm(D);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << "\n---------After Signing from Bureaucrat--------"<< std::endl;
	std::cout << B;
	std::cout << C;
	std::cout << D;

	std::cout << "\n---------Executing B--------"<< std::endl;
	try
	{
		B.execute(A);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << "\n---------Executing C--------"<< std::endl;
	try
	{
		C.execute(A);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << "\n---------Executing D--------"<< std::endl;
	try
	{
		D.execute(A);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr<< A.getName() << " - Failed: " << e.what()<< std::endl;
	}
	std::cout << "\n---------Final values--------"<< std::endl;
	std::cout << B;
	std::cout << C;
	std::cout << D;

	std::cout << "\n--------- Destructors--------"<< std::endl;
	return 0;
}