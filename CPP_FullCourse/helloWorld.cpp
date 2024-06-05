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

    std::cout << x + y << std::endl;

    do
    {
        std::cout << '\n'
                  << "Press a key to continue...";
    } while (std::cin.get() != '\n');

    return 0;
}
