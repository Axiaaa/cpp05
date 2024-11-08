/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <lcamerly@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:30:36 by tblaase           #+#    #+#             */
/*   Updated: 2024/11/08 23:53:37 by lcamerly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(int ac, char **av)
{	

	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	Bureaucrat b((ac >= 2 ? atoi(av[1]) : 140), "Gentille");
	try {
		b.signForm(*rrf);
		b.executeForm(*rrf);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	delete rrf;
	return 0;
}