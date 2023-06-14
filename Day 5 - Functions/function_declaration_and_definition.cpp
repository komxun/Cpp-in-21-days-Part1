// Listing 5.1 - A Function declaration and the definition and use
// (P.104)

#include <iostream>
int Area(int len, int wid); // function prototype 
                            // Don't need to name the arguments
int main()
{
    using std::cout;
    using std::cin;

    int legnth_yard;
    int width_yard;
    int area_yard;

    cout << "\nHow wide is your yard?  Ans: ";
    cin >> width_yard;
    cout << "\nHow long is your yard?  Ans: ";
    cin >> legnth_yard;
    
    area_yard = Area(width_yard, legnth_yard);

    cout << "\nYour yard is ";
    cout << area_yard << " square feet\n\n";
    return 0;
}

int Area(int len, int wid) // function declaration
{
    return len*wid;        // function definition
}