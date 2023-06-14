// Listing 4.1 - Evaluating Complex Expressions (P.70)
#include <iostream>
int main()
{
    using std::cout;
    using std::endl;

    int a=0, b=0, x=0, y=35;
    cout << "a: " << a << " b: " << b;
    cout << " x: " << x << " y: " << y << endl;
    a = 9;
    b = 7;
    y = x = a+b;
    cout << "a: " << a << " b: " << b;
    cout << " x: " << x << " y: " << y << endl;
    return 0;
}