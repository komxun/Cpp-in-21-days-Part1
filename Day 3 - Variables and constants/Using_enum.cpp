// Listing 3.8 - Enumerated Constants (P.62)
#include <iostream>
int main()
{
    // Define new type 'Days' and its values
    enum Days{ Sunday, Monday, Tuesday,
        Wednesday, Thurday, Friday, Saturday };

    // just like how you define: int x=10; (10 is value of 'int')
    Days today;
    today = Monday; // (Monday is value of 'Days')
                    // We can also assign today = (Days) 2; // (=Monday)

    if (today == Sunday || today == Saturday)    // || is 'or'
        std::cout << "\nGotta' love the weekends!\n";
    else
        std::cout << "\nBack to work...\n";
    
    return 0;
}