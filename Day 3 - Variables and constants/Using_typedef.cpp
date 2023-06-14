// Listing 3.3 - A Demonstration of typedef keyword (P.53)
#include <iostream>

typedef unsigned short int USHORT;  // typedef defined

int main()
{
    using std::cout;
    using std::endl;

    USHORT Width = 5, Length;
    Length = 10;

    USHORT Area = Width * Length;

    cout << "Width:\t" << Width << endl;
    cout << "Length:\t" << Length << endl;
    cout << "Area:\t" << Area << endl;
    return 0;
}