//Listing 4.3 - predix and postfix increment and decrement operators
// (P.75)
#include <iostream>
int main()
{
    using std::cout;
    int myAge = 39;    // initilize two integers
    int yourAge = 39;

    cout << "I am: " << myAge << " years old.\n";
    cout << "You are: " << yourAge << " years old.\n\n";
    
    myAge++;    // postfix increment
    ++yourAge;  // prefix increment

    cout << "One year passes...\n";
    cout << "I am " << myAge << " years old.\n";
    cout << "You are " << yourAge << " years old.\n\n";

    cout << "Another year passes\n";
    cout << "I am " << myAge++ << " years old.\n";
    cout << "You are " << ++yourAge << " years old.\n\n";

    cout << "Let's print it again\n";
    cout << "I am " << myAge << " years old.\n";
    cout << "You are " << yourAge << " years old.\n\n";
    return 0; 
}