#include <iostream>
#include <string>

int main() 
{
    int palindrome = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            int prod = i * j;
            std::string str = std::to_string(prod);
            if (str == std::string(str.rbegin(), str.rend())) {
                if(prod > palindrome) {
                    palindrome = prod;
                }
            }
        }
    }
    std::cout << palindrome;
    return 0;
}