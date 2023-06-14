// Listing 5.8 - Function Polymorphism (function overloading)
// (P.119)
#include <iostream>

int Doubler(int);
long Doubler(long);
float Doubler(float);
double Doubler(double);

using namespace std;
int main()
{
    int         myInt = 6500;
    long        myLong = 65000;
    float       myFloat = 6.5f;
    double      myDouble = 6.5e20;

    int         doubledInt;
    long        doubledLong;
    float       doubledFloat;
    double      doubledDouble;

    cout << "myInt: " << myInt << endl;
    cout << "myLong: " << myLong << endl;
    cout << "myFloat: " << myFloat << endl;
    cout << "myDouble: " << myDouble << endl;

    doubledInt = Doubler(myInt);
    doubledLong = Doubler(myLong);
    doubledFloat = Doubler(myFloat);
    doubledDouble = Doubler(myDouble);

    cout << "doubledInt: " << doubledInt << endl;
    cout << "doubledLong: " << doubledLong << endl;
    cout << "doubledFloat: " << doubledLong << endl;
    cout << "doubledDouble: " << doubledDouble << endl;

    return 0;
}
 
int Doubler(int x)
{
    cout << "In Doubler(int)\n";
    return 2*x;
}

long Doubler(long x)
{
    cout << "In Doubler(long)\n";
    return 2*x;
}

float Doubler(float x)
{
    cout << "In Doubler(float)\n";
    return 2*x;
}

double Doubler(double x)
{
    cout << "In Doubler(double)\n";
    return 2*x;
}