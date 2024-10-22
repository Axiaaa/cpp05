#include "RobotomyRequestForm.hpp"
#include <stdlib.h>



RobotomyRequestForm::RobotomyRequestForm() : AForm(25, 5, "default", "default target") {}

RobotomyRequestForm::RobotomyRequestForm(string target) : AForm(25, 5, "RobotomyRequestForm", target) {}

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
    if (this != &rhs)
        *this = rhs;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) 
: AForm(copy) {}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const { 

    (void)executor;
    std::cout << "IM MAKING DRILLING NOISES" << std::endl;
    srand(time(NULL));
    static int timesExectued;
    timesExectued++;
    int random = rand();
    for (int i = 0; i < timesExectued; i++)
        random = rand();
    if (random % 2 == 0) {
        std::cout << "Randomizing failed ! Get gud\n";
        return ;
    }
    std::cout << "Randomizing was successful, you are now a random mess\n";
}
