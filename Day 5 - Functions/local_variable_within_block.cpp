// Listing 5.3 - local variables within blocks (P.107)
#include <iostream>

void myFunc();

int main()
{
    int x = 5;
    std::cout << "\nIn main x is: " << x;

    myFunc();

    std::cout << "\nBack in main, x is now: " << x << "\n\n";
    return 0;
}

void myFunc()
{
    int x = 8;
    std::cout << "\nIn myFunc, local x: " << x << std::endl;
    {
        std::cout << "\nIn block in myFunc, x is: " << x;
        int x = 100;
        std::cout << "\nNew local x in block: " << x;
    }
    std::cout << "\nOut of block, in myFunc, x: " << x << std::endl;

}