#include <iostream>
int perfectSquare(int size)
{
    int a1[size];
    for (int i = 1; i <= size; i++)
    {
        a1[i - 1] = i * i;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "Perfect Square[" << i << "] = " << a1[i] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
int OddperfectSquare(int size)
{
    int a2[size];
    int counter = 1;
    for (int i = 1; i <= size; i++)
    {
        a2[i - 1] = counter * counter;
        counter += 2;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "Odd Perfect Square[" << i << "] = " << a2[i] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
int main()
{
    int s;
    std::cout << "Enter the size of array: ";
    std::cin >> s;
    OddperfectSquare(s);
    perfectSquare(s);
    return 0;
}