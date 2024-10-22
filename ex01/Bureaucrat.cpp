#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void Bureaucrat::signForm(Form &f) {
    if (f.getFormState() == true) {
        std::cout << "The form is already signed !\n";
        return;
    }
    if (this->getGrade() <= f.getSigneGrade()) {
        std::cout << this->getName() << " signed " << f.getName() << "\n";
        f.setSignature(true);
        }
    else
        std::cout << this->getName() << "  couldn’t sign " << f.getName() << "because grade is too low\n";
        
}