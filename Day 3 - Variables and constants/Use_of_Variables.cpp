// Listing 3.2 - Demonstration of variables (P.51)
#include <iostream>
int main()
{
    using std::cout;
    using std::endl;

    // Define variables and initialize them
    unsigned short int Width = 5, Length;
    Length = 10;

    unsigned short int Area = (Width * Length);

    cout << "Width:\t" << Width << endl;
    cout << "Length:\t" << Length << endl;
    cout << "Area:\t"  << Area << endl;
    return 0;
}