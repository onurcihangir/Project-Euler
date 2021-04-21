#include <iostream>

using namespace std;

int main()
{
    unsigned long long int num = 600851475143;
    unsigned long long int max;
    int isPrime;
    for (int i = 2; i <= num; i++) {
        if(num % i == 0) {
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
                max = i;
            }
        }
    }
    
    cout << max << endl;

    return 0;
}