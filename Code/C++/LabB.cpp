// B20, Given char from a to h and natural number  n =< 8 . Example, a2. Given pair identifies a box in chessboard where Queen is placed. Print on screen the chessboard marked with X those boxes where the Queen can move.
// Program created on : 20/10/2025

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ok;
    do
    {
        char a;
        int n;
        cout << "Enter a letter from a to h: ";
        cin >> a;
        cout << "Enter a natural number from 1 to 8: ";
        cin >> n;
        if (a < 'a' || a > 'h')
        {
            cout << "Error message: Wrong Letter";
        }
        else if (n < 1 || n > 8)
        {
            cout << "Error message: Wrong Number";
        }
        else
        {
            for (int i = 1; i <= 8; i++)
            {
                for (char j = 'a'; j <= 'h'; j++)
                {
                    if (i == n && j == a)
                    {
                        cout << "[" << "Q" << "]";
                        int num = n;
                        char let = a;
                        for (int k = 1; k <= 8; k++)
                        {
                            for (char l = 'a'; l <= 'h'; l++)
                            {
                                if (k == num - 1 || k == num + 1 || l == let - 'a' || l == let + 'a' || k == num || l == let)
                                {
                                    cout << "[" << "X" << "]";
                                    break;
                                }
                            }
                            cout << endl;
                        }
                        break;
                    }
                    cout << "[" << " " << "]";
                }
                cout << endl;
            }
        }
        cout << "If you would like to continue, enter 1 and to exit, enter any other number." << endl;
        cin >> ok; // Input to continue or exit the program
    } while (ok == 1); // Condition to continue the program
    return 0;
}

