//Listing 2.2 using std::cout (p.28)
#include<iostream>
int main()
{
    std::cout << "Hello there! \n"; 
    std::cout << "Here is 5: " << 5 << "\n";
    std::cout << "The manipulator std::endl ";
    std::cout << "writes a new line to the screen.";
    std::cout << std::endl;
    std::cout << "Here is a very big number:\t" << 70000;
    std::cout << std::endl;
    std::cout << "Here is the sum of 8 and 5:\t";
    std::cout << 8+5 << std::endl;
    std::cout << "Here's a fraction:\t\t";
    std::cout << (float) 5/8 << std::endl;
    std::cout << "And a very very big number:\t";
    std::cout << (double) 7000 * 7000 << std::endl;
    std::cout << "Komsun T. is a C++ programmer! \n";
    return 0;
}