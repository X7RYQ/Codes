#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ok;
    do
    {
        int n;
        char a;
        cout << "Enter a character from a to h" << endl;
        cin >> a;
        cout << "Enter a number between 1 to 8" << endl;
        cin >> n;
        if (a < 'a' || a > 'h' || n < 1 || n > 8)
        {
            cout << "Invalid Input" << endl;
        }
        else
        {
            string location = a + n;
            cout << location;
        }
        cout << "To restart the program enter 1, and to exit enter any other number." << endl;
        cin >> ok;
    } while (ok == 1) return 0
}