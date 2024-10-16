#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
using std::string;

class Bureaucrat;
class AForm {

    private : 
    bool _isSigned;
    const string _name;
    const short _signGrade;
    const short _execGrade;


    public : 
    
    void beSigned(Bureaucrat b);
    short getSigneGrade() const;
    short getExecGrade()const ;
    string getName() const ;
    bool getFormState() const;
    void setSignature(bool state);
    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : std::exception {
        public :
        const char* what() const throw();
    };

    class GradeTooLowException : std::exception {
        public :
        const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream& os, Form const &x);

#endif