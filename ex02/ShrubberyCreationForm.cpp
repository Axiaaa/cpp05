#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137, "default", "default target") {}

ShrubberyCreationForm::ShrubberyCreationForm(string target) : AForm(145, 137, "ShrubberyCreationForm", target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    if (this != &rhs)
        *this = rhs;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) 
: AForm(copy) {}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const { 
    (void)executor;
    string s = this->getTarget() + "_shrubbery";
    ofstream MyFile(s.c_str());
    MyFile <<  "                              \n"
    "     ,,,.   ,@@@@@@/@@,  .oo8888o.        \n"
    " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o       \n"
    " ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'      \n"
    " %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'      \n"
    " %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'       \n"
    " `&%\\ ` /%&'    |.|        \\ '|8'         \n"
    "     |o|        | |         | |           \n"
    "     |.|        | |         | |           \n"
    "  \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_  ";
}