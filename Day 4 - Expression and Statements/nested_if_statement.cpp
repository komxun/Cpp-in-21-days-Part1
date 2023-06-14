// Listing 4.6 - complex nested if statement
// (P.87)
#include <iostream>
int main()
{
    /* Ask for 2 numbers
    Assign the numbers to bigNumber and littleNumber
    If bigNumber is bigger than littleNumber,
    see if they are evenly divisible
    If they are, see if they are the same number */

    using namespace std;

    int firstNumber, secondNumber;
    cout << "Enter two numbers.\nFirst:\t";
    cin >> firstNumber;
    cout << "\nSecond:\t";
    cin >> secondNumber;
    cout << "\n";

    if (firstNumber >= secondNumber)
    {
        if ( (firstNumber % secondNumber) == 0) // evely divisible?
        {
            if (firstNumber == secondNumber)
                cout << "Hey! They are the same!!\n";
            else
                cout << "They are evenly divisible!\n";
        }
        else
            cout << "They are NOT evenly divisible!\n";
    }
    else
        cout << "Hey! The second on is larger!!\n";

    return 0;
}