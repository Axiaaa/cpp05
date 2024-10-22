#pragma once
#include "AForm.hpp"
#include <fstream>
using std::ofstream;

class RobotomyRequestForm : public AForm {

    public : 
    RobotomyRequestForm();
    RobotomyRequestForm(string target);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();
    
    void execute(Bureaucrat const & executor) const;
};