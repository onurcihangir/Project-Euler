#include <iostream>

unsigned long int find(unsigned long int n, unsigned long int* counter) {
    (*counter)++;
    if(n % 2 == 0) {
        return find(n/2, counter);
    }
    else if(n==1) {
        return *counter;
    }
    else{
        return find(3*n+1, counter);
    }
}

int main()
{
    unsigned long int number = 0, max_counter = 0, counter = 0;
    unsigned long int* cp = &counter;
    for (int i = 1; i < 1000000; i++)
    {
        counter = 0;
        find(i, cp);
        if (max_counter < counter)
        {
            max_counter = counter;
            number = i;
        }
        
    }

    std::cout << number << std::endl;

    return 0;
}