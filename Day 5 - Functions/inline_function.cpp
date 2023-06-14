// Listing 5.9 - Inline function (P.123)
#include <iostream>

inline int Doubler(int); // same as copying function definiiton to main
                        // instead of jumping to function back and forth

int main()
{
    int target;
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter a number: ";
    cin >> target;
    cout << endl;

    target = Doubler(target);
    cout << "Target = " << target << endl;

    target = Doubler(target);
    cout << "Target = " << target << endl;

    target = Doubler(target);
    cout << "Target = " << target << endl;
    return 0;
}

int Doubler(int x)
{
    return 2*x;
}