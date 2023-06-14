// Demonstrates Comments (P.34)
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    /* this is a comment
    and it extends until the closing
    star-slash comment mark */

    cout << "Hello World!\n";

    // this comment ends at the end of the line

    cout << "That comment ended!" << endl;
    
    // double-slash comments can be alone a line
    /* as can slash-star comments */
    return 0;
}