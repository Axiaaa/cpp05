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
    short getSigneGrade();
    short getExecGrade();
    string getName();
    const bool getFormState();
};

std::ostream &operator<<(std::ostream& os, Form const &x);
