#include <iostream>
#include <string>

// Declare some global vars.
std::string MessageWelcome = "You're Lightning McQueen, and want to unlock your full potential!\nYour NOS tank has a combination lock on it and the label underneath reads...\n";
std::string MessageWin = "\nFantastic! You've unlocked the NOS tank and are on your way to win the race!";
std::string MessageLoose = "\nSorry, but the combination you entered doesn't match the records.\nYou've failed to unlock your NOS tank(s) and might loose the race. Good luck!";
std::string MessageAskForInput = "\n\nPlease enter your guess for the 3 digit combination (1, 2, 3) : ";

/**
 * Print the Intro!
 */
void PrintIntroduction()
{
    std::cout << MessageWelcome;
}

/**
 * Let's play the TripleX game!
 */
void PlayGame()
{
    // Print welcome message to the terminal.
    PrintIntroduction();

    // Initialize the 3 codes..
    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    // Evaluate the SUM and PRODUCT of these codes.
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print out the CodeSum and CodeProduct hints to the user.
    std::cout << "\n+ There are 3 numbers in the code.";
    std::cout << "\n+ The combination add-up to: " << CodeSum;
    std::cout << "\n+ The combination multipley to: " << CodeProduct;

    // Declare vars for storing player's guesses.
    int GuessA, GuessB, GuessC;

    // Ask the user for inputting their guesses.
    std::cout << MessageAskForInput;
    std::cin >> GuessA >> GuessB >> GuessC;
    
    // Calculate the GuessSum and GuessProduct of the inputs..
    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check to see if the guessed sum/product match the actual sum/product.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << MessageWin;
    } else
    {
        std::cout << MessageLoose;
    }
}

/**
 * TripleX
 * Main Function
 */
int main() 
{
    // Let's play the game.
    PlayGame();
    // Return Statement
    return 0;
}