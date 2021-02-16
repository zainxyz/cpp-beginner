#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Declare some global vars.
// string MessageWelcome = "\n\nYou're Lightning McQueen, and want to unlock your full potential!\nYour NOS tank has a combination lock on it and the label underneath reads...\n";
string MessageAskForInput = "\n\nPlease enter your guess for the 3 digit combination (1, 2, 3) : ";
// string MessageLevelComplete = "\n*** Great! You've unlocked this NOS tank and are on your way to win the race! Keep going! ***";
string MessageLevelTryAgain = "\n*** Whoops! You've entered the wrong code. Careful as you might loose the race! Try again! ***";
string MessageWin = "\n*** Fantastic! You've unlocked all the NOS tanks, boosted yourself to the front of the line and won the race! ***";

/**
 * Print the Intro!
 */
void PrintIntroduction(int Difficulty)
{
    cout << "\n\n---";
    cout << "\nYou're Lightning McQueen, and are trying to unlock the level \"" << Difficulty << "\" NOS tank.";
    cout << "\nYour NOS tank has a combination lock on it and the label underneath reads...\n";
}

/**
 * Let's play the TripleX game!
 */
bool PlayGame(int Difficulty, int MaxLevel)
{
    // Print welcome message to the terminal.
    PrintIntroduction(Difficulty);

    // Initialize the 3 codes..
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    // Evaluate the SUM and PRODUCT of these codes.
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print out the CodeSum and CodeProduct hints to the user.
    cout << "\n+ There are 3 numbers in the code.";
    cout << "\n+ The combination add-up to: " << CodeSum;
    cout << "\n+ The combination multipley to: " << CodeProduct;

    // Declare vars for storing player's guesses.
    int GuessA, GuessB, GuessC;

    // Ask the user for inputting their guesses.
    cout << MessageAskForInput;
    cin >> GuessA >> GuessB >> GuessC;
    
    // Calculate the GuessSum and GuessProduct of the inputs..
    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check to see if the guessed sum/product match the actual sum/product.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        // Only print the level complete message if you're not at max level.
        if (Difficulty < MaxLevel) 
        {
            // cout << MessageLevelComplete;
            cout << "\n*** Great! You've unlocked level " << Difficulty << " NOS tank and are on your way to win the race! Keep going! ***";
        }
        // Player has completed the current level.
        return true;
    } else
    {
        cout << MessageLevelTryAgain;
        // Player lost the current level;
        return false;
    }
}

/**
 * TripleX
 * Main Function
 */
int main() 
{
    // Create a new random sequence based on the time of day.
    srand(time(NULL));
    // Current Level
    int CurrentLevel = 1;
    // Max Level
    int MaxLevel = 5;
    // GameOver?
    bool gameOn = true;
    // Keep the game running while we're not at max level.
    while(CurrentLevel <= MaxLevel)
    {
        // Declare a bool for level completion.
        // Let's play the game.
        bool bLevelComplete = PlayGame(CurrentLevel, MaxLevel);
        // Clear out any errors.
        cin.clear();
        // Discard the input buffer.
        cin.ignore();
        // Has the user completed the level successfully?
        if (bLevelComplete)
        {
            // Increase the level dificulty.
            ++CurrentLevel;
        }
        
    }
    // Print game winning message.
    cout << MessageWin;
    // Return Statement
    return 0;
}