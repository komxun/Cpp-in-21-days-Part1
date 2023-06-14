// Listing 3.4 - Putting too large a value in an unsigned short integer
// (P.54)
#include <iostream>
int main()
{
    using std::cout;
    using std::endl;

    unsigned short int smallNumber;   
    smallNumber = 65535;    // range of unsigned short int is [0, 65535]
    cout << "small number:\t\t" << smallNumber << endl;
    smallNumber++; // 1 is added
    cout << "small number +1:\t" << smallNumber << endl;
    smallNumber++; // 1 is added
    cout << "small number +2:\t" << smallNumber << endl;
    return 0;
}