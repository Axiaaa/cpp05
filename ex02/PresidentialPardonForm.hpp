
#include "AForm.hpp"
#include <fstream>
using std::ofstream;
class PresidentialPardonForm : public AForm {

    public : 
    PresidentialPardonForm();
    PresidentialPardonForm(string name);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const & executor) const;
};