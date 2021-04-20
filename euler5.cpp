#include <iostream>

int main() 
{
    int smallest = 20;
    while (true)
    {
        if (smallest%11==0 &&smallest%12==0 &&smallest%13==0 &&smallest%14==0 &&smallest%15==0 &&
        smallest%16==0 &&smallest%17==0 &&smallest%18==0 &&smallest%19==0 && smallest%20==0 )
        {
            break;
        } 
        else {
            smallest += 1;
        }
    }
    std::cout << smallest << std::endl;
}