#include "Bureaucrat.hpp"

int main(int ac, char **av) {

    try
    {
        Bureaucrat bob2((ac >= 2 ? atoi(av[1]) : 140), "bob2");
        std::cout << bob2 << "\n";
        bob2.gradeDecr();
        std::cout << bob2 << " after decrementation\n";
        bob2.gradeIncr();
        bob2.gradeIncr();
        std::cout << bob2 << " after incrementation\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}