#ifndef BUREAUCRAT_HPP
    #define BUREAUCRAT_HPP
#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

using std::string;

class AForm;
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
        void signForm(AForm &f);
        void executeForm(AForm const & form);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

        class FormNotSigned : public std::exception { 
            public:
                const char* what() const throw();
        };
        
};

std::ostream &operator<<(std::ostream& os, Bureaucrat const &x);

#endif