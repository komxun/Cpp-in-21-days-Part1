// Listing 4.2 - Subtraction and Integer Overflow (P.72)
#include <iostream>
int main()
{
    using std::cout;
    using std::endl;

    unsigned int difference;
    unsigned int bigNumber = 100;
    unsigned int smallNumber = 50;

    difference = bigNumber - smallNumber;
    cout << "The difference is: " << difference;

    difference = smallNumber - bigNumber;
    cout << "\nNow the difference is: " << difference << endl;
    return 0;
}