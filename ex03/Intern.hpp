#pragma once
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>



class Intern {

    private :

    public : 
        Intern();
        Intern(const Intern &copy);
        ~Intern();
        Intern &operator=(const Intern &rhs);
        
        AForm*  makeRobomy(string& target);
        AForm*  makeShrubbery(string& target);
        AForm*  makePresidential(string& target);
        AForm*  makeForm(string formName, string target);

};