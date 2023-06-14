// Listing 5.10 - Recursion: Fibonacci series (P.125)
#include <iostream>
int fib(int);

int main()
{
    int n, answer;
    std::cout << "Enter position to find: ";
    std::cin >> n;
    std::cout << "\n\n";

    answer = fib(n);

    std::cout << "\nAns. " << answer << " is the " << n;
    std::cout << "th Fibonacci number.\n\n";
    return 0;
}

int fib(int n)
{
    std::cout << "Processing fib(" << n << ")...";

    if (n < 3)
    {
        std::cout << "Returning 1\n";
        return 1;
    }
    else
    {
        std::cout << "Call fib(" << n-2 << ")";
        std::cout << " and fib(" << n-1 << ").\n";
        return fib(n-2) + fib(n-1);
    }
}