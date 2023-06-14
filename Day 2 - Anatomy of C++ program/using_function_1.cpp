// Listing 2.6 - Demonstrating a Call to a Function (P.35)
#include <iostream>

// function Demonstration Function
// prints out a useful message

void DemonstrationFunction()
{
    std::cout << "In Demonstration Function\n";
}

/* Function main - prints out a message, then 
calls DemonstrationFunction, then prints out
a second message. */

int main()  // the beginning of the actual program
{
    std::cout << "In main\n";
    DemonstrationFunction();
    std::cout << "Back in main\n";
    return 0;
}                               