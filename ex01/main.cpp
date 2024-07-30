#include "Bureaucrat.hpp"
#include "Form.hpp"
int main() {

    //Test 
    Bureaucrat b1(1, "Bureaucrat1");
    Bureaucrat b2(150, "Bureaucrat2");
    Bureaucrat b3(75, "Bureaucrat3");

    Form f1("Form1", 1, 1);
    Form f2("Form2", 150, 150);
    Form f3("Form3", 75, 75);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;

    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;

    b1.signForm(f1);
    b2.signForm(f2);
    b3.signForm(f3);
    b3.gradeDecr();
    b3.signForm(f3);



    return 0;
}