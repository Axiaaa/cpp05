#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
using std::string;

class Bureaucrat;
class Form {

    private : 
    bool            _isSigned;
    const string    _name;
    const short     _signGrade;
    const short     _execGrade;


    public : 
    
    Form();
    ~Form();
    Form(const Form&);
    Form(string name, short execGrade, short signGrade);
    Form& operator=(const Form& rhs);

    void    beSigned(const Bureaucrat &b);
    short   getSigneGrade() const;
    short   getExecGrade()  const;
    string  getName()       const;
    bool    getFormState()  const;
    void    setSignature(bool state);

    class GradeTooHighException : public std::exception {
        public :
            const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public :
            const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream& os, Form const &x);

#endif