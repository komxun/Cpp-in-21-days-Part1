// Listing 4.5 - else keyword (P.84)
#include <iostream>
int main()
{
    using std::cout;
    using std::cin;

    int firstNumber, secondNumber;
    cout << "Please enter a big number:\t";
    cin >> firstNumber;
    cout << "\nPlease enter a smaller number:\t";
    cin >> secondNumber;

    if (firstNumber > secondNumber)
        cout << "\nThanks!\n\n";
    else
        cout << "\nOops. The first number is not bigger!!\n\n";

    return 0;

}