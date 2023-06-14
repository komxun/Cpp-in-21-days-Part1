// Listing 4.9 - Conditional Operator (P.94)
#include <iostream>
int main()
{
    using namespace std;

    int x, y, z;
    cout << "Enter two numbers.\n";
    cout << "First:\t";
    cin >> x;
    cout << "\nSecond:\t";
    cin >> y;
    cout << "\n";

    // method 1 : if test
    if (x > y)
        z = x;
    else
        z = y;

    cout << "After if test, \nbigger number = " << z;
    cout << "\n\n";
 
    // method 2 : conditional test (shorter expression)
    z = (x > y) ? x : y;   // if x > y, z = x otherwise, z = y

    cout << "After conditional test, \nbigger number = " << z << endl;
    cout << "\n\n";

    return 0;

}