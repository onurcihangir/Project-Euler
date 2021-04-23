#include <iostream>
#define NUMBER 2000000

int main()
{
    int isPrime;
    long long int sum = 0;
    for (int i = 2; i < NUMBER; i++) {
        isPrime = 1;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                 break;
            }
        }
        if(isPrime==1)
        {
                sum+= i;
        }
    }
    
    std::cout << sum << std::endl;
    return 0;
}