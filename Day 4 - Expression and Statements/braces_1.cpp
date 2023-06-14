// Listing 4.7 - A demonstration of why Braces {} help
// clarify which else statement goes with which if statement
// (P.88)
#include <iostream>
int main()
{
    int x;
    std::cout << "Enter a number less than 10 or greater than 100: ";
    std::cin >> x;
    std::cout << "\n";

    if (x >= 10)
        if (x > 100)
            std::cout << "More than 100, Thanks!\n\n";
    else    // (evaluate for the 2nd if --> Not the else intended!)
        std::cout << "Less than 10, Thanks!\n\n";

    return 0;
}

// See how to fix this subtle bug in braces_2.cpp