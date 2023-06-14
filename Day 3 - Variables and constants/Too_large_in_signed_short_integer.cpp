// Listing 3.5 - Adding too large a number to a signed short integer
// (P.55)
#include <iostream>
int main()
{
    short int smallNumber;
    smallNumber = 32767; // signed short int range is [-32768, 32767]
    std::cout << "small number:\t\t" << smallNumber << std::endl;
    smallNumber++;
    std::cout << "small number +1:\t" << smallNumber << std::endl;
    smallNumber++;
    std::cout << "small number +2:\t" << smallNumber << std::endl;
    return 0;
} 