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
    // std  "standard" namespace
    // ::   scope operator
    // cout basic "character output" streams to console
    // <<   "insertion operator" inserting characters (what's on RHS) to the output stream
    // std::cout << "Hello World!";

    // Expression Statements - expressions that end with a semicolon
    // Print welcome messages to the terminal
    std::cout << "You're a secret agent, breaking into a secure server room!";
    // Add a new line
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;

    // Declaration Statements - statements where we "declare" something
    // Declaring 3 number codes
    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to: " << CodeProduct << std::endl;
    std::cout << std::endl;

    // Store the player's guess
    // Since these are INTs, any non-numeric input will be converted to a '0',
    // in addition, these non-numeric inputs will halt "cin" from working until reset.
    int GuessA, GuessB, GuessC;

    std::cout << "Please enter your guess for the codes, i.e. 1 2 3 : ";
    // cin         basic "character input" to get user's input
    // >>          "extraction operator" extract characters from the input stream
    // PlayerGuess the extracted user's input will be stored in this variable now
    // If player enters 234 it will be counted as a single number; however,
    // if the player enters 2 3 4, each space counts as a separate input.
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Print out the uers's guess
    std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << std::endl;
    std::cout << "Whos sum & product are: " << GuessSum << " " << GuessProduct << std::endl;

    // Return Statement
    return 0;
}