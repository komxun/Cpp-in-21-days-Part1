// Listing 2.4 - using namespace std (P.32)
#include <iostream>
int main ()
{
    using namespace std;  // The listing will be using the entire standard namespace

    cout << "Hello there! \n"; 
    cout << "Here is 5: " << 5 << "\n";
    cout << "The manipulator std::endl ";
    cout << "writes a new line to the screen.";
    cout << endl;
    cout << "Here is a very big number:\t" << 70000;
    cout << endl;
    cout << "Here is the sum of 8 and 5:\t";
    cout << 8+5 << endl;
    cout << "Here's a fraction:\t\t";
    cout << (float) 5/8 << endl;
    cout << "And a very very big number:\t";
    cout << (double) 7000 * 7000 << endl;
    cout << "Komsun T. is a C++ programmer! \n";
    return 0;

}