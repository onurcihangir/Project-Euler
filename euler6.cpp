#include <iostream>

int main()
{
    int squareSum = 0;
    for (int i = 1; i < 101; i++)
    {
        squareSum += i * i;
    }
    int sumSquare = 0;
    for (int i = 1; i < 101; i++)
    {
        sumSquare += i;
    }
    int diff = (sumSquare * sumSquare) - squareSum;
    std::cout << diff << std::endl;
    return 0;
}