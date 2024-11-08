#ifndef AFORM_HPP
    #define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
using std::string;


class Bureaucrat;
class AForm {

    private : 
        short _signGrade;
        short _execGrade;
        string _name;
        string _target;
        bool _isSigned;


    public : 
    
    AForm(short signGrade, short execGrade, string name, string target);
    virtual ~AForm();
    void beSigned(Bureaucrat &b);
    short getSigneGrade() const;
    short getExecGrade()const ;
    string getName() const ;
    string getTarget() const;
    bool getFormState() const;
    void setSignature(bool state);
    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception {
        public :
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public :
        const char* what() const throw();
    };

};

std::ostream &operator<<(std::ostream& os, AForm const &x);

#endif