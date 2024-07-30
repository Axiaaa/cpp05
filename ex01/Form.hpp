#pragma once

#include "Bureaucrat.hpp"

class Form {

    private : 
    bool _isSigned;
    const string _name;
    const short _signGrade;
    const short _execGrade;


    public : 
    
    Form();
    ~Form();
    Form(const Form&);
    Form(string name, short execGrade, short signGrade);
    Form& operator=(const Form& rhs);

    void beSigned(Bureaucrat b);
    short getSigneGrade() const;
    short getExecGrade()const ;
    string getName() const ;
    const bool getFormState() const;
    void setSignature(bool state);

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
