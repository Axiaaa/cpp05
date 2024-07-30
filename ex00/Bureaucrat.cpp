#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}
Bureaucrat::Bureaucrat(string name) : _name(name), _grade(150) {}

Bureaucrat::Bureaucrat(short grade) : _name("default"), _grade(grade) {
    if (_grade < 1)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(short grade, string name) : _name(name), _grade(grade) {
    if (_grade < 1)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat(const Bureaucrat& copy) {
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (&rhs != this)  {
        *this = rhs;
        }
    return *this;
}

short Bureaucrat::getGrade() const { return this->_grade; }
string Bureaucrat::getName() const { return this->_name; }

void Bureaucrat::gradeIncr() { _grade <= 1 ? throw GradeTooHighException() : this->_grade++ ;};
void Bureaucrat::gradeDecr() { _grade >= 150 ? throw GradeTooHighException() : this->_grade--; };

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high !\n"; 
}


const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too Low !\n"; 
}

std::ostream &operator<<(std::ostream& os, Bureaucrat const &x) {
    os << x.getName() <<  " bureaucrat grade "  << x.getGrade();
    return os;
}