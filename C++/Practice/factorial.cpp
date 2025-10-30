#include <iostream>
int factorial(int &n)
{
    int sum = n;
    for (int i = n - 1; i >= 1; i--)
    {
        sum = sum * i;
    }
    return sum;
}
int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    int result = factorial(n);
    std::cout << "Factorial of " << n << " is " << result << std::endl;
    return 0;
}