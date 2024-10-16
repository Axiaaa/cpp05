#include "AForm.hpp"


const char* AForm::GradeTooHighException::what() const throw() {
    return "The AForm grade is too high !\n";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "The AForm grade is too low !\n";
}

void AForm::beSigned(Bureaucrat b) { 
    if (b.getGrade() > this->_signGrade)
        throw GradeTooLowException();
    this->_isSigned = true;
}

short AForm::getExecGrade() const { return this->_execGrade; }
short AForm::getSigneGrade() const { return this->_signGrade; }
string AForm::getName() const { return this->_name; }
bool AForm::getFormState() const { return this->_isSigned; }


std::ostream &operator<<(std::ostream& os, AForm const &x) {
    os << "The AForm " << x.getName() << " requires grade " << x.getSigneGrade() << " to be signed and grade " << x.getExecGrade() << " to be executed. ";
    if (x.getFormState() == true)
        os << "The AForm is signed.";
    else if (x.getFormState() == false)
        os << "The AForm isn't signed.";
    return os;
}

void AForm::setSignature(bool state) {this->_isSigned = state; }