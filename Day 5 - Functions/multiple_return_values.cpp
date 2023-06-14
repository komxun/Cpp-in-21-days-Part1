// Listing 5.6 - Multiple Return statements (P.114)
#include <iostream>

int Doubler(int);

int main()
{
    using std::cout;
    using std::cin;

    int result = 0;
    int input;

    cout << "Enter a number between 0 and 10,000 to double: ";
    cin >> input;
    
    cout << "\nBefore doubler is called...";
    cout << "\ninput: " << input << " doubled: " << result << "\n";

    result = Doubler(input);

    cout << "\nBack from Doubler...\n";
    cout << "\ninput: " << input << " doubled: " << result << "\n";

    return 0;
}

int Doubler(int x)
{
    if (x <= 10000)
        return x*2;
    else
        return -1;
        std::cout << "You can't get here!\n"; // never get reached!!!
}