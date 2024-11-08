
#include "AForm.hpp"
#include <fstream>
using std::ofstream;
class ShrubberyCreationForm : public AForm {



    public : 
    ShrubberyCreationForm();
    ShrubberyCreationForm(string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const & executor) const;
};