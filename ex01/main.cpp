#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    try 
    {
        Bureaucrat b1(1, "Bureaucrat1");
        Bureaucrat b2(150, "Bureaucrat2");
        Bureaucrat b3(75, "Bureaucrat3");
        //Bureaucrat b4(0, "Bureaucrat4");

        Form f1("Form1", 1, 1);
        Form f2("Form2", 150, 150);
        Form f3("Form3", 75, 75);
        //Form f4("Form4", 0, 0);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;

        b1.signForm(&f1);
        b2.signForm(&f2);
        b2.signForm(&f2);
        b3.signForm(&f3);
        std::cout << f3 << std::endl;
        b3.gradeIncr();
        f3.setSignature(false);
        b3.signForm(&f3);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}