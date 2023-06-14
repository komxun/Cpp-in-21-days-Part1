// Listing 3.7 - Printing Characters Based on numbers, Take 2
// (P.58)
#include <iostream>
int main()
{
    for (unsigned char i = 32; i<128; i++)
        std::cout << i;  // Assigning number to char gives char accroding to ASCII
    return 0;
}