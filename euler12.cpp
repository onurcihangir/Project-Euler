#include <iostream>

int main()
{
    long long divisor = 0;
    long long num = 0;
    for (long long i = 1; divisor <= 500; i++)
    {
        num = i * (i+1)/2;
        for (long long j = 1; i <= num; j++)
        {
            if (num%j == 0)
            {
                divisor++;
            }
        }
    }

    std::cout << num << std::endl;
    return 0;
}