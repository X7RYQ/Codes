// Homework 2 Question : Enter a string from keyboard. If the string has digits then extract all digits from the string and create a natural number.
// Program created on : 06/10/2025
#include <iostream>
using namespace std;
int main()
{
    char a;
    int n = 0;
    cout << "Enter a string" << endl;
    cin >> a;
    while (a != '.')
    {
        if (a >= '0' && a <= '9')
        {
            n = n * 10 + int(a) - int('0');
        }
        else
        {
            n = n;
        }
        cin >> a;
    }
    cout << n;
    return 0;
}