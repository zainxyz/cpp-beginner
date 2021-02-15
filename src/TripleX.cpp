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
    std::cout << "You need to enter the correct codes to continue..." << std::endl;

    // Declaration Statements - statements where we "declare" something
    // Declaring 3 number codes
    const int CodeA = 5;
    const int CodeB = 6;
    const int CodeC = 7;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to: " << CodeProduct << std::endl;

    // Store the player's guess
    int PlayerGuess;

    // Return Statement
    return 0;
}