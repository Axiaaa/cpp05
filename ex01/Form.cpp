#include "Form.hpp"


Form::Form() : _isSigned(false), _execGrade(5), _signGrade(45), _name("default") {}

Form::Form(string name, short execGrade, short signGrade) : _isSigned(false), _execGrade(execGrade), _signGrade(signGrade), _name(name) {
    if (_execGrade < 1 || _signGrade < 1)
        throw GradeTooHighException();
    if (_execGrade > 150 || _signGrade > 150)
        throw GradeTooLowException();
} 

Form::~Form() {}

Form::Form(const Form& copy ): _isSigned(copy._isSigned),  _execGrade(copy._execGrade), _signGrade(copy._signGrade), _name(copy._name) {}

Form& Form::operator=(const Form& rhs) {
    if (this != &rhs)
        *this = rhs;
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "The form grade is too high !\n";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "The form grade is too low !\n";
}

void Form::beSigned(Bureaucrat b) { 
    if (this->getSigneGrade() < b.getGrade())
        throw GradeTooLowException();
    this->_isSigned = true;
}

short Form::getExecGrade() const { return this->_execGrade; }
short Form::getSigneGrade() const { return this->_signGrade; }
string Form::getName() const { return this->_name; }
const bool Form::getFormState() const{ return this->_isSigned; }


std::ostream &operator<<(std::ostream& os, Form const &x) {
    os << "The form " << x.getName() << " requires grade " << x.getSigneGrade() << " to be signed and grade " << x.getExecGrade() << " to be executed. ";
    if (x.getFormState() == true)
        os << "The form is signed.";
    else if (x.getFormState() == false)
        os << "The form isn't signed.";
    return os;
}

void Form::setSignature(bool state) {this->_isSigned = state; }