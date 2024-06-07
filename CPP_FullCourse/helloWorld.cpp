#include <iostream>
#include <vector>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

typedef std::vector<std::pair<std::string, int>> pairList_t;
typedef std::string text;

using text_g = std::string;

int main()
{
    using namespace first;
    using std::cout;
    using std::string;

    string hello = "hello";
    text_g meg= "meg";

    // Basic print line
    std::cout << "Hello World" << std::endl;
    std::cout << x << std::endl;
    std::cout << second::x << std::endl;
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
    pairList_t pair;

    text name2 = "Marci";

    std::cout << name2 << std::endl;

    int students = 20;

    students++;
    students += 1;
    students--;
    students *= 2;
    students /= 2;
    float reminder = students % 9;


    std::cout << students << std::endl;
    std::cout << reminder << std::endl;

    /*
        do
        {
            std::cout << '\n'
                      << "Press a key to continue...";
        } while (std::cin.get() != '\n');
    */
    return 0;
}
