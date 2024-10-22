/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:30:36 by tblaase           #+#    #+#             */
/*   Updated: 2024/10/22 23:39:19 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	{
		Bureaucrat *a = new Bureaucrat(5, "bob");
		AForm *b = new PresidentialPardonForm("Joe biden");
		AForm *c = new RobotomyRequestForm("Donald duck");
		AForm *d = new ShrubberyCreationForm("Gooy aah form");
		try
		{
			a->signForm(*b);
			a->executeForm(*b);
			a->signForm(*c);
			a->executeForm(*c);
			a->signForm(*d);
			a->executeForm(*d);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch(Bureaucrat::FormNotSigned &e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete a;
		delete b;
		delete c;
		delete d;
	}
}