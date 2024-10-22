#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &copy) { *this = copy; }
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &rhs) {
    if (&rhs != this)
        return (*this);
    return (*this);
 }

AForm *Intern::makeRobomy(string& target)   { return (new RobotomyRequestForm(target));}
AForm *Intern::makeShrubbery(string& target)    { return (new ShrubberyCreationForm(target));}
AForm *Intern::makePresidential(string& target) { return (new PresidentialPardonForm(target));}


AForm*  Intern::makeForm(string formName, string target) 
{

    string formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    AForm* (Intern::*formFunctions[3])(string&) = {&Intern::makeRobomy, &Intern::makeShrubbery, &Intern::makePresidential};
    for (int i = 0; i < 3; i++)
    {
        if (formNames[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*formFunctions[i])(target);
        }
    }

    std::cout << "Intern cannot create " << formName << std::endl;
    return (NULL);
}
