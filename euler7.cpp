#include <iostream>

int main()
{
    int num = 1;
    int count = 0;
    while (count < 10001)
    {
        num += 1;
        for (int i = 2; i <= num; i++)
        {
            if (num%i == 0 && num != i)
            {
                break;
            }
            else if (num == i)
            {
                count += 1;
            }  
        }  
    }
    
    std::cout << num << std::endl;
    return 0;
}