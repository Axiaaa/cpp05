#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "default", "default target") {}

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm(25, 5, "PresidentialPardonForm", target) {}

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    if (this != &rhs)
        *this = rhs;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) 
: AForm(copy) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    (void)executor;
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}