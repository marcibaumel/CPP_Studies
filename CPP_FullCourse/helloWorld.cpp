#include <iostream>

int main()
{
    // Basic print line
    std::cout << "Hello World" << std::endl;
    std::cout << "Meh" << '\n';

    // Variables
    int x; // declaration
    x = 5; // assignment

    int y = 4;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    std::cout << x + y << std::endl;

    float days = 7.5;
    std::cout << days << std::endl;

    double gpa = 2.42542525;
    std::cout << gpa << std::endl;

    char grade = 'A';
    char initial = 'B';

    std::cout << grade << std::endl;
    std::cout << initial << std::endl;

    bool studentStatus = false;
    bool power = true;

    std::cout << studentStatus << std::endl;
    std::cout << power << std::endl;
    std::cout << (studentStatus && power) << std::endl;

    std::string name = "Marci";
    std::string food = "Pizza";

    std::cout << food << std::endl;
    std::cout << "Hello " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;

    const double PI = 3.14159;
    const double RAD = 10;
    double circumference = 2 * PI * RAD;

    std::cout << circumference << std::endl;

    do
    {
        std::cout << '\n'
                  << "Press a key to continue...";
    } while (std::cin.get() != '\n');

    return 0;
}
