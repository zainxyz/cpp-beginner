// Preprocessor Directive
// # represents a preprocessor directive
// <iostream> is a header file
#include <iostream>

/**
 * Main Function
 */
int main() 
{
    // namespace::myfunction
    // std  namespace standard
    // ::   scope operator
    // cout basic output streams to console
    // <<   what to output
    // std::cout << "Hello World!";

    // Expression Statements - expressions that end with a semicolon
    // Print welcome messages to the terminal
    std::cout << "You're a secret agent, breaking into a secure server room!";
    // Add a new line
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";

    // Declaration Statements - statements where we "declare" something
    // Declaring 3 number codes
    const int a = 5;
    const int b = 6;
    const int c = 7;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    // Return Statement
    return 0;
}