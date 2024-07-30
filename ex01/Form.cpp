#include "Form.hpp"


Form::Form() : _isSigned(false), _execGrade(5), _signGrade(45), _name("default") {}

Form::Form(string name, short execGrade, short signGrade) : _isSigned(false), _execGrade(execGrade), _signGrade(signGrade), _name(name) {
    if 
} 

Form::~Form() {}

Form::Form(const Form& copy ): _isSigned(copy._isSigned),  _execGrade(copy._execGrade), _signGrade(copy._signGrade), _name(copy._name) {}

Form& Form::operator=(const Form& rhs) {
    if (this != &rhs)
        *this = rhs;
    return *this;
}


short Form::getExecGrade() { return this->_execGrade; }
short Form::getSigneGrade() { return this->_signGrade; }
string Form::getName() { return this->_name; }
const bool Form::getFormState() { return this->_isSigned; }



