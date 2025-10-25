// B20, Given char from a to h and natural number  n =< 8 . Example, a2. Given pair identifies a box in chessboard where Queen is placed. Print on screen the chessboard marked with X those boxes where the Queen can move.
// Program created on : 20/10/2025

#include <iostream>
using namespace std;
int main()
{
    int ok; // Variable to control the loop for continuing or exiting the program
    do
    {
        int n, num_display = 8; // Variables to store natural number
        char a;                 // Variables to store character
        cout << "Enter a letter from a to h: ";
        cin >> a;
        cout << "Enter a natural number from 1 to 8: ";
        cin >> n;
        if (a < 'a' || a > 'h') // Input validation for character
        {
            cout << "Error message: Wrong Letter" << endl;
        }
        else if (n < 1 || n > 8) // Input validation for natural number
        {
            cout << "Error message: Wrong Number" << endl;
        }
        else
        {
            for (int i = 8; i > 0; i--) // Loop to print rows of chessboard
            {
                cout << num_display << " "; // Print row number
                num_display--;              // Decrement row number for next iteration
                for (int j = 0; j < 8; j++) // Loop to print columns of chessboard
                {
                    if (i == n && j == (int(a) - int('a'))) // Condition to identify the position of the Queen
                    {
                        cout << "[Q]"; // Print Q for Queen's position
                    }
                    else if (i == n || j == (int(a) - int('a'))) // Condition to identify the positions where the Queen can move
                    {
                        cout << "[X]"; // Print X for positions where the Queen can move
                    }
                    else
                    {
                        cout << "[ ]"; // Print empty positions
                    }
                }
                cout << endl; // Move to the next line after printing each row
            }
            cout << "   a  b  c  d  e  f  g  h  " << endl;
        }
        cout << "If you would like to continue, enter 1 and to exit, enter any other number." << endl;
        cin >> ok; // Input to continue or exit the program
    } while (ok == 1); // Condition to continue the program
    return 0;
}
