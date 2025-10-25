// Srivishva Melvin, sm25017
// A19, Given natural number n. Find Fibonacci number f(n). (Fibonacci numbers are: f(1) = 1, f(2) = 1, f(n) = f(n-1) + f(n-2), t. i. f(3)=2, f(4)=3, f(5)=5 ...)
// Program created on : 23/09/2025

#include <iostream>
using namespace std;
int main()
{
    int ok; // Variable declation for looping the program
    do
    {
        double n, n1, F, f1, f2;
        cout << "Enter a natural number" << endl;
        cin >> n;  // Natural number declaration
        n1 = n;    // Same number for Fibonacci output
        if (n < 0) // Error message for non-natural numbers
        {
            cout << "Error message: Not a natural number" << endl;
        }
        else if (n == 0) // Answer for 0
        {
            cout << "f(0) = 0" << endl;
        }
        else
        {
            f1 = 0; // initial values of a Fibonacci series
            f2 = 1;
            while (n > 0) // loop to calculate the Fibonacci number
            {
                F = f1 + f2;
                f2 = f1;
                f1 = F;
                n--;
            }
            cout << "f(" << n1 << ") = " << F << endl; // Output of the Fibonacci number
        }
        cout << "If you would like to continue, enter 1 and to exit, enter any other number." << endl;
        cin >> ok; // Input to continue or exit the program
    } while (ok == 1); // Condition to continue the program
    return 0;
}