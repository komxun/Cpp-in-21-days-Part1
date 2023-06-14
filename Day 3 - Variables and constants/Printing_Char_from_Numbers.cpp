// Listing 3.6 - Printing Characters Based on Numbers (P.57)
#include <iostream>
int main()
{
    for (int i = 32; i<128; i++)  // for integers 32 through  127
        std::cout << (char) i;    // important to have () over char to display number as character
    return 0;
}