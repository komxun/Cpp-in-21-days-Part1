// Listing 5.2 - Local variables and parameters (P.106)
#include <iostream>

float Convert(float);  // function prototype
int main()
{
    using namespace std;
    float TempFer;
    float TempCel;

    cout << "Please enter the temperature in Fahrenheit:\t";
    cin >> TempFer;
    TempCel = Convert(TempFer);
    cout << "\nHere's the temperature in Celcius: ";
    cout << TempCel << endl;

    return 0;
}

float Convert(float TF)     // TF and TC are local variables
{
    float TC;           
    TC = ((TF - 32)*5)/9;
    return TC;
}