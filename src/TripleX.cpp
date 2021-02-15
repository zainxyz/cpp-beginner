// # represents a preprocessor directive
// <iostream> is a header file
#include <iostream>

int main() 
{
    // namespace::myfunction
    // std  namespace standard
    // ::   scope operator
    // cout basic output streams to console
    // <<   what to output
    // std::cout << "Hello World!";

    std::cout << "You're a secret agent, breaking into a secure server room!";
    // Add a new line
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";

    const int a = 5;
    const int b = 6;
    const int c = 7;

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}