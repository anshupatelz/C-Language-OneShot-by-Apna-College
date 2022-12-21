// Q23: Calculate the sum of all numbers between 5 and 50. (including 5 & 50) [03:49:13]
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("\nSum of all numbers between 5 and 50. (including 5 & 50) is: %d", sum);
    return 0;
}

// Done