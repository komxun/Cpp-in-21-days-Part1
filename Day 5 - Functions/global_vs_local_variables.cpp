// Listing 5.5 - Global and Local variables (P.110)
#include <iostream>
void myFunction();      // prototype

int x = 5, y = 7;       // Global variables
int main()
{
    using namespace std;
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
    myFunction();
    cout << "Back from myFunction!!\n\n";
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl << endl;
    return 0;
}

void myFunction()
{
    using std::cout;
    using std::endl;
    int y = 10;

    cout << "x from myFunction: " << x << endl;
    cout << "y from myFunction: " << y << endl << endl;

} 