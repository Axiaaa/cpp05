#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

using std::string;
#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat {

    private :
        const string _name;
        short       _grade;

    public :

        Bureaucrat();
        Bureaucrat(short grade, string name);
        Bureaucrat(string name);
        Bureaucrat(short grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat&);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        void    signForm(Form *f);

        string  getName() const;
        short   getGrade() const;
        void    gradeIncr();
        void    gradeDecr();

        class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& os, Bureaucrat const &x);

#endif