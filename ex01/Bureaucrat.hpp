#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"
#include <iostream>
#include <cstdlib>

using std::string;

class Form;
class Bureaucrat {

    private :
        const string _name;
        short _grade;

    public :

        Bureaucrat();
        Bureaucrat(short grade, string name);
        Bureaucrat(short grade);
        Bureaucrat(string name);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat&);
        Bureaucrat& operator=(const Bureaucrat& rhs);

        string getName() const;
        short getGrade() const;
        void gradeIncr();
        void gradeDecr();

        class GradeTooHighException : std::exception {
        public:
            const char* what() const throw();
        };

        class GradeTooLowException : std::exception {
        public:
            const char* what() const throw();
        };

        void signForm(Form &f);
};

std::ostream &operator<<(std::ostream& os, Bureaucrat const &x);

#endif