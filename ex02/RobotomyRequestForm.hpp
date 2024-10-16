#include "AForm.hpp"

class RobotomyRequestForm : AForm {

    public : 
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs); 

    virtual void execute(Bureaucrat const & executor) const;


};